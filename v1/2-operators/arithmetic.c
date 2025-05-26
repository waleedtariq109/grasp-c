#include <stdio.h>

int main(int argc, char *argv[]) {
  /**
   * Arithmetic Operator
   * + -> Addition
   * - -> Substraction
   * / -> Division
   * * -> Multiplication
   * % -> Modulus
   * ++ -> Increment
   * -- -> decrement
   */

  int value1 = 10;
  int value2 = 33;

  int additionResult = value1 + value2;
  int subractionResult = value1 - value2;
  int multiplicationResult = value1 * value2;
  float divisionResult = (float)value1 / (float)value2;
  int modulusResult = value1 % value2;

  printf("%s %d\n", "Addition:", additionResult);
  printf("%s %d\n", "Subtraction:", subractionResult);
  printf("%s %d\n", "Multiplication:", multiplicationResult);
  printf("%s %f\n", "Division:", divisionResult);
  printf("%s %d\n", "Modulus:", modulusResult);

  printf("%s\n", "----------------------------------------");
  printf("\n");

  int number = 10;
  printf("%d\n", number++);  // Postfix increment
  printf("%d\n", number);

  int number1 = 20;
  printf("%d\n", ++number1);  // Prefix increment

  int number2 = 10;
  printf("%d\n", number2--);  // Postfix decrement
  printf("%d\n", number2);

  int number3 = 20;
  printf("%d\n", --number3);  // Prefix decrement

  return 0;
}
