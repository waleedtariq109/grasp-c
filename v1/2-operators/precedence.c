#include <stdio.h>

int main() {
  int a = 10, b = 5, c = 2;

  int result1 = a + b * c;    // Multiplication has higher precedence
  int result2 = (a + b) * c;  // Parentheses change the order

  printf("Result 1 (a + b * c): %d\n", result1);    // 10 + (5 * 2) = 20
  printf("Result 2 ((a + b) * c): %d\n", result2);  // (10 + 5) * 2 = 30

  return 0;
}
