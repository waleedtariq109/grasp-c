#include <stdio.h>

int main(int argc, char* argv[]) {
  int numberToTest, remainder;

  // Ask the user for input
  printf("%s", "Enter the number: ");
  scanf("%d", &numberToTest);

  // Calculate remainder to check if number is even or odd
  remainder = numberToTest % 2;

  // --- Basic if-else ---
  if (remainder == 0) {
    printf("%d is even (using if-else)\n", numberToTest);
  } else {
    printf("%d is odd (using if-else)\n", numberToTest);
  }

  // --- if-else if-else example ---
  if (numberToTest == 0) {
    printf("The number is zero (using else-if)\n");
  } else if (numberToTest > 0) {
    printf("The number is positive (using else-if)\n");
  } else {
    printf("The number is negative (using else-if)\n");
  }

  // --- Ternary operator example ---
  const char* parity = (remainder == 0) ? "even" : "odd";
  printf("%d is %s (using ternary)\n", numberToTest, parity);

  return 0;
}
