#include <stdio.h>

int main() {
  int grade1, grade2, grade3;
  double result;
  printf("%s", "Enter Grade1: ");
  scanf("%d", &grade1);
  printf("%s", "Enter Grade2: ");
  scanf("%d", &grade2);
  printf("%s", "Enter Grade3: ");
  scanf("%d", &grade3);
  result = ((double)grade1 + (double)grade2 + (double)grade3) / 3;
  printf("%s %.2lf%%\n", "The total percentage of 3 grades is:", result);
}
