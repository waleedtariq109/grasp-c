#include <stdio.h>

int main() {
  /**
   * In this example, the int is converted to a double due to the type promotion rule.
   * This rule states that whenever we perform a mixed-type mathematical operation,
   * the smaller type is promoted to the bigger type. This is called implicit conversion
   */

  int num1 = 5;
  double num2 = 2;
  double result;

  result = num1 / num2;
  printf("%s %lf\n", "Result:", result);

  /**
   * In this example we explicitly convert the type of num3 from int to double
   * since num3 is of type double the type of num4 is promoted from int to double
   * and this is called explicit conversion
   */

  int num3 = 5;
  double num4 = 2;
  double result1;

  result1 = (double)num3 / num4;
  printf("%s %lf\n", "Result:", result);

  return 0;
}
