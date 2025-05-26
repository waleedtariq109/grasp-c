#include <stdio.h>

int main() {
  // Declare two integer variables
  int a = 7;
  int b = 2;

  // ------------------------------
  // 1. Implicit Type Conversion
  // ------------------------------
  // When assigning int to float, the compiler automatically converts int to float
  float implicit = a;                                            // int 'a' is promoted to float
  printf("Implicit conversion (int to float): %f\n", implicit);  // Outputs: 7.000000

  // ------------------------------
  // 2. Integer Division (Without Casting)
  // ------------------------------
  // This will perform integer division: 7 / 2 = 3 (fraction is discarded)
  float result1 = a / b;                                        // Both a and b are int, so result is int before storing in float
  printf("Without casting (integer division): %f\n", result1);  // Outputs: 3.000000

  // ------------------------------
  // 3. Explicit Type Casting
  // ------------------------------
  // Casting 'a' to float before division ensures floating-point division
  float result2 = (float)a / b;                                     // a is converted to float: 7.0 / 2 = 3.5
  printf("With casting (accurate float division): %f\n", result2);  // Outputs: 3.500000

  // ------------------------------
  // 4. Casting float to int (Losing precision)
  // ------------------------------
  float pi = 3.14159;
  int intPi = (int)pi;                                  // Only the integer part remains, fractional part is discarded
  printf("Float to int (loses decimal): %d\n", intPi);  // Outputs: 3

  return 0;
}
