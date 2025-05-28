// Made by Vlad. Budnitski.
// AlphaTech - Programming Course.

#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, c;
  int max, min;

  printf("Enter first number: ");
  scanf("%d", &a);

  printf("Enter second number: ");
  scanf("%d", &b);

  printf("Enter third number: ");
  scanf("%d", &c);

  max = a;
  min = b;

  if (a < b) {
    max = b;
    min = a;
  }

  if (max < c)
    max = c;

  if (c < min)
    min = c;

  printf("MAXIMUM between 3 numbers = %d\n", max);
  printf("MINIMUM between 3 numbers = %d\n", min);

  return 0;
}