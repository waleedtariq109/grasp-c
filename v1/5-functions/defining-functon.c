#include <stdio.h>

/**
 * If we define the function prototype at the top and call the function before
 * its definition, then this is valid C code.
 *
 * If we don't define the function prototype, then we must declare the function
 * before calling it.
 */

void add();  // -> Function prototype

int main() {
  add();
  return 0;
}

void add() {
}
