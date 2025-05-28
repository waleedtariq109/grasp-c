#include <stdio.h>

void main() {
  int num1, num2;

  printf("%s", "Enter num1: ");
  scanf("%d", &num1);

  printf("%s", "Enter num2: ");
  scanf("%d", &num2);

  if (num1 > num2) {
    printf("%s %d\n", "Maximum:", num1);
    printf("%s %d\n", "Minimum:", num2);
  } else {
    printf("%s %d\n", "Maximum:", num2);
    printf("%s %d\n", "Minimum:", num1);
  }
}
