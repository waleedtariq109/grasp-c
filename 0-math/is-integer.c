#include <stdio.h>

int main() {
  float number;
  printf("%s", "Enter the number: ");

  /**
   * Integers numbers basically includes all the negative and positive number except decimals.
   */

  scanf("%f", &number);

  if (number == (int)number) {
    printf("%.2f %s\n", number, "is an integer");
  } else {
    printf("%.2f %s\n", number, "is not an integer");
  }
}
