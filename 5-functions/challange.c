#include <math.h>
#include <stdio.h>

// Function prototypes
int gcd(int a, int b);
float absoluteValue(float num);
float squareRoot(float num);

int main() {
  // Test gcd
  printf("GCD of 48 and 18 = %d\n", gcd(48, 18));

  // Test absoluteValue
  printf("Absolute value of -5.5 = %.2f\n", absoluteValue(-5.5));
  printf("Absolute value of 3 = %.2f\n", absoluteValue(3));

  // Test squareRoot
  printf("Square root of 16 = %.2f\n", squareRoot(16));
  printf("Square root of -9 = %.2f\n", squareRoot(-9));

  return 0;
}

// Function to find GCD using Euclidean Algorithm
int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

// Function to compute absolute value
float absoluteValue(float num) {
  return (num < 0) ? -num : num;
}

// Function to compute square root
float squareRoot(float num) {
  if (num < 0) {
    printf("Cannot compute square root of a negative number.\n");
    return -1.0;
  }
  return sqrt(num);
}
