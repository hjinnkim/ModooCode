#include <stdio.h>

int main() {
  int a = 3;
  {
    int a = 4;
    printf("a = %d \n", a);
  } // different region

  printf("a = %d \n", a);
}