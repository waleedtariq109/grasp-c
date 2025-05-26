#include <stdio.h>

int main() {
  // --- For loop example ---
  printf("For loop:\n");
  for (int i = 1; i <= 3; i++) {
    printf("  Count: %d\n", i);
  }

  // --- While loop example ---
  printf("\nWhile loop:\n");
  int j = 1;
  while (j <= 3) {
    printf("  Count: %d\n", j);
    j++;
  }

  // --- Do...while loop example ---
  printf("\nDo...while loop:\n");
  int k = 1;
  do {
    printf("  Count: %d\n", k);
    k++;
  } while (k <= 3);

  return 0;
}
