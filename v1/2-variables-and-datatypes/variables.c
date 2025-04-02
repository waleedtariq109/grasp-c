#include <stdio.h>

int main() {
  int num = 98;
  float floatingNumber = 98.90f;
  double doubleNumber = 878.883;
  short int shortNum = 99;
  long int longNum = 7382;
  char character = 'C';
  char string[] = "This is String";

  printf("%d\n", num);
  printf("%.2f\n", floatingNumber);
  printf("%.2f\n", doubleNumber);
  printf("%d\n", shortNum);
  printf("%ld\n", longNum);
  printf("%c\n", character);
  printf("%s\n", string);
  return 0;
}
