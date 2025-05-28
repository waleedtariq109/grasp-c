// Made by Vlad. Budnitski.
// AlphaTech - Programming Course.

#include <stdio.h>
#include <stdlib.h>

int main() {
  char grade;  // not an int, yes? :)
  printf("Enter your grade (A-F) : ");
  scanf("%c", &grade);
  switch (grade)  // Specifying Variable
  {
    case 'A':  // grade == 'A'
      printf("Grade between 90-100 \n");
      break;
    case 'B':  // grade == 'B'
      printf("Grade between 80-89 \n");
      break;
    case 'C':  // grade == 'C'
      printf("Grade between 70-79 \n");
      break;
    case 'D':  // grade == 'D'
      printf("Grade between 60-69 \n");
      break;
    default:
      printf("ERROR.. Try Again! \n");
      break;
  }
  return 0;
}