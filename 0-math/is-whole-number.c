#include <stdio.h>

int main() {
  float number;

  printf("%s", "Enter the number: ");
  scanf("%f", &number);

  // Check if number is whole or not.

  /**
   * All positive numbers starting from 0 to infinity are whole numbers.
   * Any number that is a decimal is not a whole number.
   */

  if (number >= 0 && number == (int)number) {
    printf("%.2f %s\n", number, "is a whole number");
  } else {
    printf("%.2f %s\n", number, "is a not whole number");
  }
}
