#include <stdio.h>

enum gender {
  male,
  female
};

enum TrafficLights {
  RED,
  YELLOW,
  GREEN
};

int main(void) {
  enum gender myGender = male;
  enum gender anotherGender = female;

  enum TrafficLights signal = GREEN;

  switch (signal) {
    case RED: {
      printf("%s\n", "STOP");
      break;
    }
    case YELLOW: {
      printf("%s\n", "Ready to move");
      break;
    }
    case GREEN: {
      printf("%s\n", "GO");
      break;
    }
    default: {
      printf("%s\n", "Invalid Signal");
      break;
    }
  }

  char a = 'a';
  char asciiA = 65;

  printf("%c\n", a);
  printf("%c\n", asciiA);

  return 0;
}
