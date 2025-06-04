#include <stdio.h>

int main() {
  int number;

  printf("%s", "Enter a number: ");
  scanf("%d", &number);

  if (number < 0) {
    int abs = -1 * number;
    printf("%d %s\n", abs, "is the absolute value");
  } else {
    printf("%d %s\n", number, "is the absolute value");
  }
}
