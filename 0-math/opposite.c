#include <stdio.h>

int main() {
  int number, result = 0;

  printf("%s", "Enter a number: ");
  scanf("%d", &number);

  // 1
  result = -number;
  printf("The opposite of %d is %d\n", number, result);

  // 2
  if (number < 0) {
    result = number * (-1);
    printf("The opposite of %d is %d\n", number, result);
  } else {
    result = number * (-1);
    printf("The opposite of %d is %d\n", number, result);
  }

  // 3
  result = number * (-1);
  printf("The opposite of %d is %d\n", number, result);
}
