#include <stdio.h>

int main() {
  int num1, num2, choice;

  printf("Enter first number: ");
  scanf("%d", &num1);

  printf("Enter second number: ");
  scanf("%d", &num2);

  printf("\nChoose an operation:\n");
  printf("1. Addition (+)\n");
  printf("2. Subtraction (-)\n");
  printf("3. Multiplication (*)\n");
  printf("4. Division (/)\n");
  printf("Enter your choice (1-4): ");
  scanf("%d", &choice);

  // Switch statement based on user's choice
  switch (choice) {
    case 1:
      printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
      break;
    case 2:
      printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
      break;
    case 3:
      printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
      break;
    case 4:
      if (num2 != 0) {
        printf("Result: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
      } else {
        printf("Error: Division by zero is not allowed.\n");
      }
      break;
    default:
      printf("Invalid choice. Please enter a number between 1 and 4.\n");
  }

  return 0;
}
