#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BOOKS 1000
#define MAX_USERS 100
#define MAX_NAME 100
#define FINE_PER_DAY 5

// ---------------------------- STRUCTS ----------------------------
typedef struct {
  int id;
  char title[MAX_NAME];
  char author[MAX_NAME];
  int year;
  int quantity;
} Book;

typedef struct {
  int userId;
  char name[MAX_NAME];
  int borrowedBookId;
  int dueDays;
  int hasBook;
} User;

// ---------------------------- GLOBALS ----------------------------
Book books[MAX_BOOKS];
User users[MAX_USERS];
int bookCount = 0;
int userCount = 0;

// ---------------------------- FUNCTION DECLARATIONS ----------------------------
void loadBooks();
void saveBooks();
void loadUsers();
void saveUsers();
void addBook();
void displayBooks();
void searchBook();
void issueBook();
void returnBook();
void addUser();
void displayUsers();
void calculateFine();
void menu();

// ---------------------------- MAIN ----------------------------
int main() {
  loadBooks();
  loadUsers();
  menu();
  saveBooks();
  saveUsers();
  return 0;
}

// ---------------------------- FILE HANDLING ----------------------------
void loadBooks() {
  FILE *fp = fopen("books.dat", "rb");
  if (fp != NULL) {
    fread(&bookCount, sizeof(int), 1, fp);
    fread(books, sizeof(Book), bookCount, fp);
    fclose(fp);
  }
}

void saveBooks() {
  FILE *fp = fopen("books.dat", "wb");
  fwrite(&bookCount, sizeof(int), 1, fp);
  fwrite(books, sizeof(Book), bookCount, fp);
  fclose(fp);
}

void loadUsers() {
  FILE *fp = fopen("users.dat", "rb");
  if (fp != NULL) {
    fread(&userCount, sizeof(int), 1, fp);
    fread(users, sizeof(User), userCount, fp);
    fclose(fp);
  }
}

void saveUsers() {
  FILE *fp = fopen("users.dat", "wb");
  fwrite(&userCount, sizeof(int), 1, fp);
  fwrite(users, sizeof(User), userCount, fp);
  fclose(fp);
}

// ---------------------------- BOOK FUNCTIONS ----------------------------
void addBook() {
  if (bookCount >= MAX_BOOKS) {
    printf("Book storage is full!\n");
    return;
  }

  Book b;
  b.id = bookCount + 1;
  printf("Enter Book Title: ");
  getchar();
  fgets(b.title, MAX_NAME, stdin);
  b.title[strcspn(b.title, "\n")] = 0;

  printf("Enter Author: ");
  fgets(b.author, MAX_NAME, stdin);
  b.author[strcspn(b.author, "\n")] = 0;

  printf("Enter Year: ");
  scanf("%d", &b.year);
  printf("Enter Quantity: ");
  scanf("%d", &b.quantity);

  books[bookCount++] = b;
  printf("Book added successfully!\n");
}

void displayBooks() {
  printf("\n--- Book List ---\n");
  for (int i = 0; i < bookCount; i++) {
    printf("ID: %d, Title: %s, Author: %s, Year: %d, Available: %d\n",
           books[i].id, books[i].title, books[i].author, books[i].year, books[i].quantity);
  }
  printf("-----------------\n");
}

void searchBook() {
  char keyword[MAX_NAME];
  printf("Enter title or author to search: ");
  getchar();
  fgets(keyword, MAX_NAME, stdin);
  keyword[strcspn(keyword, "\n")] = 0;

  printf("\n--- Search Results ---\n");
  for (int i = 0; i < bookCount; i++) {
    if (strstr(books[i].title, keyword) || strstr(books[i].author, keyword)) {
      printf("ID: %d, Title: %s, Author: %s, Year: %d, Available: %d\n",
             books[i].id, books[i].title, books[i].author, books[i].year, books[i].quantity);
    }
  }
  printf("----------------------\n");
}

// ---------------------------- USER FUNCTIONS ----------------------------
void addUser() {
  if (userCount >= MAX_USERS) {
    printf("User storage is full!\n");
    return;
  }
  User u;
  u.userId = userCount + 1;
  printf("Enter user name: ");
  getchar();
  fgets(u.name, MAX_NAME, stdin);
  u.name[strcspn(u.name, "\n")] = 0;
  u.hasBook = 0;

  users[userCount++] = u;
  printf("User added successfully!\n");
}

void displayUsers() {
  printf("\n--- Users List ---\n");
  for (int i = 0; i < userCount; i++) {
    printf("ID: %d, Name: %s, Has Book: %s\n", users[i].userId, users[i].name, users[i].hasBook ? "Yes" : "No");
  }
  printf("------------------\n");
}

// ---------------------------- ISSUE & RETURN ----------------------------
void issueBook() {
  int userId, bookId;
  printf("Enter user ID: ");
  scanf("%d", &userId);
  printf("Enter book ID: ");
  scanf("%d", &bookId);

  if (userId <= 0 || userId > userCount || bookId <= 0 || bookId > bookCount) {
    printf("Invalid user or book ID!\n");
    return;
  }

  if (users[userId - 1].hasBook) {
    printf("User already has a book issued!\n");
    return;
  }

  if (books[bookId - 1].quantity <= 0) {
    printf("Book is not available!\n");
    return;
  }

  books[bookId - 1].quantity--;
  users[userId - 1].borrowedBookId = bookId;
  users[userId - 1].dueDays = 14;
  users[userId - 1].hasBook = 1;

  printf("Book issued successfully for 14 days!\n");
}

void returnBook() {
  int userId;
  printf("Enter user ID: ");
  scanf("%d", &userId);

  if (userId <= 0 || userId > userCount || !users[userId - 1].hasBook) {
    printf("Invalid user or no book to return!\n");
    return;
  }

  int bookId = users[userId - 1].borrowedBookId;
  books[bookId - 1].quantity++;
  users[userId - 1].hasBook = 0;
  users[userId - 1].borrowedBookId = -1;
  users[userId - 1].dueDays = 0;

  printf("Book returned successfully!\n");
}

void calculateFine() {
  int userId, lateDays;
  printf("Enter user ID: ");
  scanf("%d", &userId);
  printf("Enter number of late days: ");
  scanf("%d", &lateDays);

  if (userId <= 0 || userId > userCount || !users[userId - 1].hasBook) {
    printf("Invalid user or no book issued!\n");
    return;
  }

  int fine = lateDays * FINE_PER_DAY;
  printf("Total fine: %d\n", fine);
}

// ---------------------------- MENU ----------------------------
void menu() {
  int choice;
  do {
    printf("\n--- Library Management Menu ---\n");
    printf("1. Add Book\n");
    printf("2. Display Books\n");
    printf("3. Search Book\n");
    printf("4. Add User\n");
    printf("5. Display Users\n");
    printf("6. Issue Book\n");
    printf("7. Return Book\n");
    printf("8. Calculate Fine\n");
    printf("0. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
      case 1:
        addBook();
        break;
      case 2:
        displayBooks();
        break;
      case 3:
        searchBook();
        break;
      case 4:
        addUser();
        break;
      case 5:
        displayUsers();
        break;
      case 6:
        issueBook();
        break;
      case 7:
        returnBook();
        break;
      case 8:
        calculateFine();
        break;
      case 0:
        printf("Exiting...\n");
        break;
      default:
        printf("Invalid choice!\n");
        break;
    }
  } while (choice != 0);
}