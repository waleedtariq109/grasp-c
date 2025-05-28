#include <stdio.h>

void main() {
  int grade;
  printf("%s", "Enter the grade: ");
  scanf("%d", &grade);

  if (grade >= 60) {
    printf("%s\n", "Congratulations, You are pass");
  } else {
    printf("%s\n", "Fail, Try again");
  }
}
