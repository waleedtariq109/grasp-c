#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char number[100];
  bool isFraction = false;
  bool isDecimal = false;

  char numeratorStr[50];
  char denominatorStr[50];

  printf("Enter a number: ");
  scanf("%s", number);

  int i = 0;
  while (number[i] != '\0') {
    if (number[i] == '/') {
      isFraction = true;
    } else if (number[i] == '.') {
      isDecimal = true;
    }
    ++i;
  }

  if (isFraction) {
    int slashIndex = 0;
    while (number[slashIndex] != '/' && number[slashIndex] != '\0') {
      numeratorStr[slashIndex] = number[slashIndex];
      ++slashIndex;
    }
    numeratorStr[slashIndex] = '\0';
    ++slashIndex;

    int j = 0;
    while (number[slashIndex] != '\0') {
      denominatorStr[j++] = number[slashIndex++];
    }
    denominatorStr[j] = '\0';

    int numerator = atoi(numeratorStr);
    int denominator = atoi(denominatorStr);

    if (denominator == 0) {
      printf("Denominator cannot be zero\n");
    } else {
      printf("Input is Fraction\n");
      printf("%d is numerator\n", numerator);
      printf("%d is denominator\n", denominator);
      printf("This is a valid rational number\n");
    }

  } else if (isDecimal) {
    printf("Input is Decimal\n");

    int dotIndex = 0;
    while (number[dotIndex] != '.' && number[dotIndex] != '\0') {
      ++dotIndex;
    }
    ++dotIndex;  // Move past '.'

    char decimalPart[50];
    int k = 0;
    while (number[dotIndex] != '\0') {
      decimalPart[k++] = number[dotIndex++];
    }
    decimalPart[k] = '\0';

    int len = strlen(decimalPart);
    if (len == 0) {
      printf("No digits after decimal point. Invalid input.\n");
    } else {
      // Simple repeating pattern check (for repeating blocks of size 1 to 3)
      bool isRepeating = false;
      for (int size = 1; size <= 3 && size < len / 2; size++) {
        bool patternRepeats = true;
        for (int j = 0; j < len - size; j++) {
          if (decimalPart[j] != decimalPart[j + size]) {
            patternRepeats = false;
            break;
          }
        }
        if (patternRepeats) {
          isRepeating = true;
          break;
        }
      }

      if (isRepeating) {
        printf(
            "Repeating decimal detected. This is a valid rational number.\n");
      } else {
        printf("Decimal has %d digits. Assuming terminating decimal.\n", len);
        printf("This is a valid rational number\n");
      }
    }

  } else {
    printf("Input is Integer\n");
    printf("This is a valid rational number\n");
  }

  return 0;
}
