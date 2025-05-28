// Made by Vlad. Budnitski.
// AlphaTech - Programming Course.

#include <stdio.h>
#include <stdlib.h>

// NOTE: This program is for explanatory purposes only.
//		 It shouldn't run yet!

int main() {
  // Logical Operators //
  // If we got 90 or higher
  // AND
  // If we have less than 50 bucks
  int money;
  int grade;
  printf("Enter money and grade: \n");
  scanf("%d%d", &money, &grade);

  if (money < 50 && grade > 90)
    // Do something

    if (money < 50 || grade > 90)
      // Do something

      // NOT <-> "!"
      if (!(grade > 80))
        printf("Good Job! \n");  // grde<-80

  return 0;
}