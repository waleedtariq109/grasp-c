#include <stdio.h>

#define MONTHS 12

int main(void) {
  int arr[4] = {};  // Initialize all array element with 0
  int arr1[4];      // Initialize with garbage value

  int arr3[5] = {
      [2] = 87,
      [0] = 23,
  };
  for (int i = 0; i < 5; ++i) {
    printf("%d\n", arr3[i]);
  }

  int months[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30};

  for (int i = 0; i < MONTHS; ++i) {
    printf("%d\n", months[i]);
  }
}
