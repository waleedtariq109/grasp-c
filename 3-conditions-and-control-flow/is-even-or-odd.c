#include <stdio.h>

void main() {
  int num;

  printf("%s", "Enter the number: ");
  scanf("%d", &num);

  if (num % 2 == 0) {
    printf("%d %s\n", num, "is even");
  } else {
    printf("%d %s\n", num, "is odd");
  }
}
