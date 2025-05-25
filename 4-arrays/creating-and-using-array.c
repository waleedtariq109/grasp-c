#include <stdio.h>

int main(void) {
  int grades[10];        // Array Storing 10 values
  int count = 10;        // Number of values to be read
  long sum = 0;          // Sum of the numbers
  float average = 0.0f;  // Average of the numbers

  printf("\n%s\n", "Enter the 10 grades:");

  for (int i = 0; i < count; ++i) {
    printf("%2u> ", i + 1);
    scanf("%d", &grades[i]);
    sum += grades[i];
  }

  average = (float)sum / count;

  printf("%s %.2f\n", "The average is:", average);
}
