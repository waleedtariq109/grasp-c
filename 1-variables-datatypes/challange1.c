#include <stdio.h>

int main() {
  // Calculate Age

  int currentYear;
  int bornYear;

  printf("%s", "Current Year: ");
  scanf("%d", &currentYear);

  printf("%s", "Birth Year: ");
  scanf("%d", &bornYear);

  int age = currentYear - bornYear;

  printf("You age is: %d\n", age);

  return 0;
}
