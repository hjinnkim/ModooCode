#include <stdio.h>

// enclosed by "" are literal
// They has a fixed value
// We cannot change them

int main() {
  char str[] = "hello";
  char *pstr = "goodbye";

  str[1] = 'a';
//   pstr[1] = 'a'; // gives error

  return 0;
}