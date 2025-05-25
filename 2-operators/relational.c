#include <stdio.h>

int main() {
  int a = 10;
  int b = 20;

  // == (Equal to)
  printf("a == b: %d\n", a == b);  // 0 (false)

  // != (Not equal to)
  printf("a != b: %d\n", a != b);  // 1 (true)

  // > (Greater than)
  printf("a > b: %d\n", a > b);  // 0 (false)

  // < (Less than)
  printf("a < b: %d\n", a < b);  // 1 (true)

  // >= (Greater than or equal to)
  printf("a >= b: %d\n", a >= b);  // 0 (false)

  // <= (Less than or equal to)
  printf("a <= b: %d\n", a <= b);  // 1 (true)

  return 0;
}
