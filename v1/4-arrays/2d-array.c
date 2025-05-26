#include <stdio.h>

int main() {
  int matrix[2][3] = {
      {1, 2, 3},
      {4, 5, 6},
  };

  // Accessing elements
  printf("Element at [0][1]: %d\n", matrix[0][1]);  // Output: 2

  // Printing all elements
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  int multiDimensionalArray[2][3][4] = {
      {
          {1, 2, 3, 4},
          {5, 6, 7, 8},
          {9, 10, 11, 12},
      },
      {
          {13, 14, 15, 16},
          {17, 18, 19, 20},
          {21, 22, 23, 24},
      },
  };
  printf("\n");
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < 3; ++j) {
      for (int k = 0; k < 4; ++k) {
        printf("%d ", multiDimensionalArray[i][j][k]);
      }
      printf("\n");
    }
  }

  return 0;
}
