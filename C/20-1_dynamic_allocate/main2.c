#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int i;
  int x, y;
  int **arr;  // 2 dimensional array dynamic allocate

  printf("row, columns\n");
  scanf("%d %d", &x, &y);

  arr = (int **)malloc(sizeof(int *) * x);

  for (i = 0; i < x; i++) {
    arr[i] = (int *)malloc(sizeof(int) * y);
  }

  // *(*(arr+row)+column)

  printf("Created! \n");

  for (i = 0; i < x; i++) {
    free(arr[i]);
  }
  free(arr);

  return 0;
}