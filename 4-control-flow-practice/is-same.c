#include <stdio.h>

int main() {
  int num1, num2;

  printf("%s", "Enter number 1: ");
  scanf("%d", &num1);

  printf("%s", "Enter number 2: ");
  scanf("%d", &num2);

  if (num1 == num2) {
    printf("%s\n", "Both numbers are equal");
  } else {
    printf("%s\n", "Both numbers are not equal");
  }
}
