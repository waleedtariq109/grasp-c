#include <stdbool.h>
#include <stdio.h>

int main(void) {
  int intVariable = 245;
  float floatVariable = 872.380f;
  double doubleVariable = 739723.324879283e+10;
  _Bool boolvariable = 1;

  signed int signedIntVariable = -876;
  unsigned int unsignedIntVariable = 287;

  long int longIntVariable = 893729847284;
  short int shortIntVariable = 879;

  /**
   * In C89 standard we have to use _Bool as a datatype and 0 as false and 1 as true
   *
   * In C99 we can include bool standard library called stdbool and after that
   * we can use bool as a datatype and true and false
   */

  bool boolVar = true;
}
