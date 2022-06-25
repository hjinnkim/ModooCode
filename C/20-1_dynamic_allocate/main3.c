#include <stdio.h>
#include <stdlib.h>

void print_array(int width, int height, int (*arr)[width]);

int main() {
  int width, height;
  printf("rows : ");
  scanf("%d", &width);
  printf("columns : ");
  scanf("%d", &height);

  int(*arr)[width] = (int(*)[width])malloc(height * width * sizeof(int));

  free(arr);
  return 0;
}

void print_array(int  width, int height, int (*arr)[width])
// void print_array(int (*arr)[width], int width, int height) // To notify width to compiler, int width should come first and int (*arr)[width] comes next
{
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
}