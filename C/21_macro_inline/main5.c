#include <stdio.h>
__inline int square(int a) { return a * a; }
int main(int argc, char **argv) {
  printf("%d\n", square(3));
  printf("%d\n", square(3+1));

  // because square is inline function, 
  // compiler substitutes square(3) as 3 * 3
  // For simple process, inline is much efficient and much safer than macro function

  return 0;
}