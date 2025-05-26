#include <stdio.h>

int main() {
  int a = 6;  // 00000110 in binary
  int b = 3;  // 00000011 in binary

  // Bitwise AND
  printf("a & b = %d\n", a & b);  // 00000010 → 2

  // Bitwise OR
  printf("a | b = %d\n", a | b);  // 00000111 → 7

  // Bitwise XOR
  printf("a ^ b = %d\n", a ^ b);  // 00000101 → 5

  // Bitwise NOT
  printf("~a = %d\n", ~a);  // 11111001 (2's complement of 6) → -7

  // Left Shift
  printf("a << 1 = %d\n", a << 1);  // 00001100 → 12

  // Right Shift
  printf("a >> 1 = %d\n", a >> 1);  // 00000011 → 3

  return 0;
}
