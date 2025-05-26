#include <stdio.h>

int main(int argc, char* argv[]) {
  int numberOfArgs = argc;

  char* arg1 = argv[0];
  char* arg2 = argv[1];

  printf("%d\n", numberOfArgs);
  printf("%s\n", arg1);
  printf("%s\n", arg2);
  return 0;
}
