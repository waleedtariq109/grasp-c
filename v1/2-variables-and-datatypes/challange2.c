#include <stdio.h>

int main() {
  double tempratureCelcius;
  double tempratureFarenheit;
  printf("%s", "Type the temprature in Celcius: ");
  scanf("%lf", &tempratureCelcius);
  tempratureFarenheit = tempratureCelcius * 1.8 + 32;
  printf("%s %.2lf\n", "Temprature converted in Farenheit is: ", tempratureFarenheit);

  double tempratureCelcius1;
  double tempratureFarenheit1;
  printf("%s", "Type the temprature in Farenheit: ");
  scanf("%lf", &tempratureCelcius1);
  tempratureFarenheit1 = (tempratureCelcius1 - 31) / 1.8;
  printf("%s %.2lf\n", "Temprature converted in Celcius is: ", tempratureFarenheit1);
  return 0;
}
