#include <stdio.h>

int main() {
  int a = 10;
  int b = 20;
  int temp;

  temp = a;
  a = b;
  b = temp;

  printf("%s %d\n", "a:", a);
  printf("%s %d\n", "b:", b);

  return 0;
}
