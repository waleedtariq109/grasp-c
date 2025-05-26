#include <stdio.h>

int main() {
  // Calculate Area

  double width;
  double height;

  printf("%s", "Width of a Rectangle: ");
  scanf("%lf", &width);

  printf("%s", "Height of a Rectangle: ");
  scanf("%lf", &height);

  double area = width * height;

  printf("%s %.2lf\n", "The area of rectangle is:", area);

  return 0;
}
