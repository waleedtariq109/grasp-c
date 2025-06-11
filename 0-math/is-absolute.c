#include <stdio.h>

int main() {
  int number;

  printf("%s", "Enter a number: ");
  scanf("%d", &number);

  if (number < 0) {
    int abs = number * (-1);
    printf("%d %s\n", abs, "is the absolute value");
  } else {
    printf("%d %s\n", number, "is the absolute value");
  }
}

/**
 *
 * 5 * (-1)
 *
 */
