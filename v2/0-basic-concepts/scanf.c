#include <stdio.h>

int main() {
  /**
   * scanf is used when we want to take a input from user
   */
  char str[100];
  int i;
  printf("%s", "Enter a value: ");
  scanf("%s %d", str, &i);
  printf("%s %d\n", str, i);
  return 0;
}
