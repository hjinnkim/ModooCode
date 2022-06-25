#include <stdio.h>
#include <string.h>

int main() {
  int arr[10] = {1, 2, 3, 4, 5};
  int arr2[10] = {1, 2, 3, 4, 5};

  if (memcmp(arr, arr2, 5) == 0)
    printf("arr & arr2 is eqaul! \n");
  else
    printf("arr & arr2 is different \n");

  return 0;
}