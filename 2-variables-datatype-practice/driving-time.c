#include <stdio.h>

int main() {
  int speed, distance, time;

  printf("%s", "Enter the distance (km): ");
  scanf("%d", &distance);

  printf("%s", "Enter the speed (kmh): ");
  scanf("%d", &speed);

  time = distance / speed;

  printf("%s %d hours\n", "The total time required to cover the distance is:", time);

  return 0;
}
