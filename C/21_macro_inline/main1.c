#include <stdio.h>
#define square(x) x*x
#define square2(x) (x)*(x)

int main(int argc, char **argv) {
  printf("square(3) : %d \n", square(3));
  printf("square(3) : %d \n", square(3+1));

  // in compile step, 3+1 is calculated
  // But square is macro function, thus before compile, square is substitue as 
  // 3+1*3+1
  // Thus, 7
  printf("square(3) : %d \n", square2(3+1));

  return 0;
}