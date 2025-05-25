#include <stdio.h>

int main() {
  int a = 10;

  // = (Simple assignment)
  int b = a;  // b = 10

  // += (Add and assign)
  b += 5;  // b = b + 5 → b = 15

  // -= (Subtract and assign)
  b -= 3;  // b = b - 3 → b = 12

  // *= (Multiply and assign)
  b *= 2;  // b = b * 2 → b = 24

  // /= (Divide and assign)
  b /= 4;  // b = b / 4 → b = 6

  // %= (Modulus and assign)
  b %= 4;  // b = b % 4 → b = 2

  printf("Final value of b: %d\n", b);

  return 0;
}
