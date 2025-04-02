#include <stdio.h>

int main() {
  /**
   * The printf expects the const char* as a first argument
   * and to print a values of different type we have to pass the format specifier
   */

  /**
   * We have to specify the %d, %s, %f, %c, %x format specifier and
   * these are just a placeholder and will replaced by original value
   * which we want to print
   */

  // For int we have to use %d specifier
  int intVar = 89;
  printf("%d\n", intVar);

  // For float and double we have to use %f or %lf
  float floatVar = 88.98;
  printf("%f\n", floatVar);

  // For char we have to use %c
  char charVar = 'W';
  printf("%c\n", charVar);

  // For string we have to use %s
  char stringVar[] = "This is a String.";
  printf("%s\n", stringVar);

  // For hex we have to use %x (lowercase) or %X (uppercase)
  int hexVar = 0xfff;
  printf("%x\n", hexVar);

  return 0;
}
