#include <stdio.h>

int main() {
  float a1, d, an, result;
  int n;

  printf("%s", "Enter the initial term (a1): ");
  scanf("%f", &a1);

  printf("%s", "Enter the difference in the Arithmetic Sequence: ");
  scanf("%f", &d);

  printf("%s", "Enter the number of elements in the Arithmetic Sequence: ");
  scanf("%d", &n);

  an = a1 + (n - 1) * d;
  result = (a1 + an) * n / 2;

  printf("%s %f\n", "The n-th term of the Arithmetic Sequence: ", result);

  return 0;
}
