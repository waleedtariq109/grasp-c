#include <stdio.h>

int main() {
  // Implicit type conversion
  int num1 = 5;
  double num2 = 2;
  double result;
  result = num1 / num2;
  printf("The result is %.2lf\n", result);

  // Explicit type conversion
  int num3 = 5;
  int num4 = 2;
  double result1;
  result1 = (double)num3 / (double)num4;
  printf("The result1 is %.2lf\n", result1);

  return 0;
}
