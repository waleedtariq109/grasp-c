#include <stdio.h>

int main() {
  int num;

  printf("%s", "Enter number: ");
  scanf("%d", &num);

  if (num >= 10 && num <= 99) {
    printf("%s\n", "Number is double digit");
  } else if (num >= 100 && num < 999) {
    printf("%s\n", "Number is triple digit");
  } else {
    printf("%s\n", "Neither double/triple digit");
  }
}
