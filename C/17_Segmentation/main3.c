#include <stdio.h>

int global; // If global variables are not initialized, compiler set it to 0
int function() {
  global++;
  return 0;
}
int main() {
  function();
  printf("%d \n", global);
  return 0;
}