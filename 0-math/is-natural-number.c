#include <stdio.h>

int main() {
  float number;

  printf("%s", "Enter the number: ");
  scanf("%f", &number);

  // Check if number is natural or not.

  /**
   * All positive numbers starting from 1 to infinity are natural numbers.
   * Any number that is a decimal is not a natural number.
   */

  if (number > 0 && number == (int)number) {
    printf("%f %s\n", number, "is a natural number");
  } else {
    printf("%f %s\n", number, "is a not natural number");
  }
}
