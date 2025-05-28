#include <stdio.h>

void main() {
  int num1, num2;

  printf("%s", "Enter num1: ");
  scanf("%d", &num1);

  printf("%s", "Enter num2: ");
  scanf("%d", &num2);

  if (num1 > num2) {
    printf("%s %d\n", "Num 1 is greater which is:", num1);
  } else {
    printf("%s %d\n", "Num 2 is greater which is:", num2);
  }
}
