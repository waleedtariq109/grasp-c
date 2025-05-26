#include <stdio.h>

int main(void) {
  char str[100];
  int num;

  printf("%s", "Please enter a string: ");
  scanf("%s", str);
  printf("%s", "Please enter a number: ");
  scanf("%d", &num);

  printf("%s %d\n", "You enter: ", num);
  printf("%s %s", "You enter: ", str);
}
