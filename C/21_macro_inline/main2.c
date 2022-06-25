#include <stdio.h>
#define RADTODEG(x) (x) * 57.295

int main(int argc, char **argv) {
  printf("5 rad is : %f degree", RADTODEG(5));

  // What if 1 / RADTODEG(x) ?
  // 1 / x * 57.295

  return 0;
}