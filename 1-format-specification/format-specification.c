#include <stdio.h>

int main() {
  /**
   * Specifier - Data Type
   *    %d         int (signed)
   *    %u         int (unsigned)
   *    %f         float/double
   *    %.2f       float/double (2 decimal)
   *    %c         Character
   *    %s         String
   *    %p         pointer
   *    %x         hex (lowercase)
   *    %X         hex (upppercase)
   */

  printf("%d\n", 56);
  printf("%u\n", -8);
  printf("%f\n", 98.98);
  printf("%.2f\n", 98.98);
  printf("%c\n", 'C');
  printf("%s\n", "Hello This is a String");
  int num = 98;
  int *p_num = &num;
  printf("%p\n", p_num);
  printf("%x\n", 0xfff);
  printf("%X\n", 0xfff);

  return 0;
}
