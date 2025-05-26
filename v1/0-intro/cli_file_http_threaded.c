// longest_modern_c_program.c
#define _POSIX_C_SOURCE 200112L

#include <arpa/inet.h>
#include <errno.h>
#include <math.h>
#include <netdb.h>
#include <stdarg.h>
#include <stdatomic.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <threads.h>
#include <time.h>
#include <unistd.h>

// UTF-8 Hello World (modern C can work with UTF-8)
static const char *welcome_msg = u8"🚀 Welcome to the Modern C Program\n";

// Global atomic counter
atomic_int global_counter = 0;

#pragma region UTILS

// Logging utility
inline void logf(const char *level, const char *fmt, ...) {
  va_list args;
  va_start(args, fmt);
  time_t now = time(NULL);
  struct tm *t = localtime(&now);
  printf("[%02d:%02d:%02d] [%s] ", t->tm_hour, t->tm_min, t->tm_sec, level);
  vprintf(fmt, args);
  printf("\n");
  va_end(args);
}

// File reading
char *read_file(const char *filename) {
  FILE *f = fopen(filename, "rb");
  if (!f) return NULL;
  fseek(f, 0, SEEK_END);
  long size = ftell(f);
  rewind(f);
  char *data = malloc(size + 1);
  fread(data, 1, size, f);
  data[size] = '\0';
  fclose(f);
  return data;
}

// File writing
bool write_file(const char *filename, const char *data) {
  FILE *f = fopen(filename, "w");
  if (!f) return false;
  fprintf(f, "%s", data);
  fclose(f);
  return true;
}

#pragma endregion

#pragma region NETWORK

// Simple HTTP GET (POSIX)
int http_get(const char *host, const char *path) {
  struct addrinfo hints = {0}, *res;
  int sockfd;
  char request[1024];

  hints.ai_family = AF_INET;
  hints.ai_socktype = SOCK_STREAM;

  if (getaddrinfo(host, "80", &hints, &res) != 0) {
    perror("getaddrinfo");
    return -1;
  }

  sockfd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
  if (connect(sockfd, res->ai_addr, res->ai_addrlen) != 0) {
    perror("connect");
    close(sockfd);
    return -1;
  }

  snprintf(request, sizeof(request),
           "GET %s HTTP/1.1\r\nHost: %s\r\nConnection: close\r\n\r\n",
           path, host);
  send(sockfd, request, strlen(request), 0);

  char buffer[2048];
  int bytes;
  while ((bytes = recv(sockfd, buffer, sizeof(buffer) - 1, 0)) > 0) {
    buffer[bytes] = '\0';
    printf("%s", buffer);
  }

  close(sockfd);
  freeaddrinfo(res);
  return 0;
}

#pragma endregion

#pragma region THREADING

int thread_main(void *arg) {
  int id = *(int *)arg;
  for (int i = 0; i < 5; i++) {
    atomic_fetch_add(&global_counter, 1);
    logf("THREAD", "Thread %d: iteration %d, counter = %d", id, i, global_counter);
    thrd_sleep(&(struct timespec){.tv_sec = 1}, NULL);
  }
  return 0;
}

void run_threads() {
  thrd_t threads[3];
  int ids[3] = {1, 2, 3};

  for (int i = 0; i < 3; i++) {
    thrd_create(&threads[i], thread_main, &ids[i]);
  }
  for (int i = 0; i < 3; i++) {
    thrd_join(threads[i], NULL);
  }
}

#pragma endregion

#pragma region MATH

double calc_pi(int terms) {
  double pi = 0.0;
  for (int k = 0; k < terms; k++) {
    pi += (k % 2 == 0 ? 1.0 : -1.0) / (2.0 * k + 1.0);
  }
  return pi * 4.0;
}

void test_math() {
  logf("MATH", "Estimating π using 100000 terms: %.15f", calc_pi(100000));
}

#pragma endregion

#pragma region CLI

void cli_menu() {
  int choice;
  do {
    printf("\n-- Modern C CLI Menu --\n");
    printf("1. Print Welcome\n");
    printf("2. Run Threads\n");
    printf("3. Estimate Pi\n");
    printf("4. HTTP GET example.com\n");
    printf("5. Read file\n");
    printf("6. Write file\n");
    printf("0. Exit\n");
    printf("Choice: ");
    scanf("%d", &choice);
    getchar();  // consume newline

    switch (choice) {
      case 1:
        printf("%s", welcome_msg);
        break;
      case 2:
        run_threads();
        break;
      case 3:
        test_math();
        break;
      case 4:
        http_get("example.com", "/");
        break;
      case 5: {
        char filename[256];
        printf("Filename to read: ");
        fgets(filename, sizeof(filename), stdin);
        filename[strcspn(filename, "\n")] = 0;
        char *content = read_file(filename);
        if (content) {
          puts(content);
          free(content);
        } else {
          logf("ERROR", "Could not read file.");
        }
        break;
      }
      case 6: {
        char filename[256], content[1024];
        printf("Filename to write: ");
        fgets(filename, sizeof(filename), stdin);
        filename[strcspn(filename, "\n")] = 0;
        printf("Content: ");
        fgets(content, sizeof(content), stdin);
        if (write_file(filename, content)) {
          logf("INFO", "File written.");
        } else {
          logf("ERROR", "Could not write file.");
        }
        break;
      }
      case 0:
        logf("EXIT", "Exiting program.");
        break;
      default:
        logf("WARN", "Invalid option.");
    }
  } while (choice != 0);
}

#pragma endregion

#pragma region MAIN

int main(void) {
  logf("INFO", "Starting Modern C Program");
  cli_menu();
  return 0;
}

#pragma endregion
