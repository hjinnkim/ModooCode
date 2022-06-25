#include <stdio.h>

int* function() {
  static int a = 2; //static variable is not destroyed after exit the region it is declared
  return &a;
}

int main() {
  int* pa = function();
  printf("%d \n", *pa);
}