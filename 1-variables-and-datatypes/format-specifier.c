#include <stdio.h>

int main(void) {
  // Integer (positive/negative whole numbers)
  int myInt = 42;
  printf("Integer (%%d): %d\n", myInt);

  // Character (single character)
  char myChar = 'A';
  printf("Character (%%c): %c\n", myChar);

  // String (array of characters / text)
  char myStr[] = "Hello, world!";
  printf("String (%%s): %s\n", myStr);

  // Float (decimal number, single precision)
  float myFloat = 3.1415f;
  printf("Float (%%f): %f\n", myFloat);

  // Double (decimal number, double precision)
  double myDouble = 2.7182818284;
  printf("Double (%%lf): %lf\n", myDouble);  // or just %f, both work for printf

  // Unsigned int (positive whole numbers only)
  unsigned int myUnsigned = 4294967295;
  printf("Unsigned Int (%%u): %u\n", myUnsigned);

  // Hexadecimal (base 16)
  int hexNum = 255;
  printf("Hexadecimal lowercase (%%x): %x\n", hexNum);
  printf("Hexadecimal UPPERCASE (%%X): %X\n", hexNum);

  // Octal (base 8)
  int octNum = 64;
  printf("Octal (%%o): %o\n", octNum);

  // Pointer (memory address)
  int *ptr = &myInt;
  printf("Pointer address (%%p): %p\n", (void *)ptr);

  // Long int
  long myLong = 123456789L;
  printf("Long Int (%%ld): %ld\n", myLong);

  // Long long int
  long long myLongLong = 123456789012345LL;
  printf("Long Long Int (%%lld): %lld\n", myLongLong);

  return 0;
}
