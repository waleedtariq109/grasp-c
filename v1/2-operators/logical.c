#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  /**
   * Here are the logical operators in C
   *  && (Logical AND) -> Returns true if both operands has non-zero value
   *  || (Logical OR) -> Return true if any of the poerands has non-zero value
   ** !  (Logical NOT) -> It's used to revers the original state of its operand
   */

  bool a = false;  // -> false == 0
  bool b = true;   // -> true == 1
  bool result;

  result = a && b;
  result = a || b;

  printf("%d\n", !result);

  return 0;
}
