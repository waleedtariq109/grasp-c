#include <stdbool.h>
#include <stdio.h>

int main() {
  /**
   * In C we have different datatypes to store data.
   *
   * int, bool, float, double, char.. and soo on
   *
   */

  // int used to store interger
  // sizeof a int is 32/4 bit/bytes
  int intVariable = 87;

  // float used to store decimal points number like 87.63
  // sizeof a float is 32/4 bit/bytes
  float floatVariable = 87.97;

  // double used to store decimal points number like 87.63 but it also stores the larger number then float
  // sizeof a double is 64/8 bit/bytes
  double doubleVariable = 8763.329827;

  // Boolean used to store 0/1 or true/false and it used to make a decision
  _Bool boolVariable = 0;  // Before C99 standard

  // Modern and cleaner way
  bool anotherBoolVariable = true;

  /**
   * In C99 and later (C11), we can use `bool` instead of `_Bool`,
   * and `true` or `false` instead of `0` or `1`.
   *
   * To use `bool`, `true`, and `false`, we need to include the `stdbool.h` library.
   *
   * Although `_Bool` and `0`/`1` are still valid in C99 or higher, using `bool`
   * and `true`/`false` makes the code cleaner and more readable.
   * Behind the scenes, `bool` is just a macro for `_Bool`, so it's syntactic sugar,
   * but `_Bool` is the actual type in action.
   */

  printf("%d\n", intVariable);
  printf("%f\n", floatVariable);
  printf("%lf\n", doubleVariable);
  printf("%d\n", boolVariable);
  printf("%d\n", anotherBoolVariable);

  return 0;
}
