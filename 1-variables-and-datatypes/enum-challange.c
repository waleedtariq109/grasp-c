#include <stdio.h>

enum companies {
  GOOGLE,
  FACEBOOK,
  XEROX,
  YAHOO,
  EBAY,
  MICROSOFT
};

int main(void) {
  enum companies xeros = XEROX;
  enum companies google = GOOGLE;
  enum companies ebay = EBAY;

  printf("%s %d\n", "The value of xerox is:", xeros);
  printf("%s %d\n", "The value of google is:", google);
  printf("%s %d\n", "The value of ebay is:", ebay);
}
