#include <stdio.h>
#define AddName(x, y) x##y

// Preprocessor treat ## as 'merging'

int main(int argc, char **argv) {
  int AddName(a, b);

  ab = 3;

  printf("%d \n", ab);

  return 0;
}