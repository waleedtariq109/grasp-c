#include <stdio.h>

int main() {
  int grade1, grade2, grade3;
  double averageGrade;

  printf("%s", "Grade1: ");
  scanf("%d", &grade1);

  printf("%s", "Grade2: ");
  scanf("%d", &grade2);

  printf("%s", "Grade3: ");
  scanf("%d", &grade3);

  averageGrade = ((double)grade1 + grade2 + grade3) / 3;

  printf("%s %.2lf\n", "The average grade is:", averageGrade);

  return 0;
}
