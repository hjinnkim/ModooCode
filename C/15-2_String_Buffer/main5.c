#include <stdio.h>

//Enter 123abc

int main() {
  int num, i;
  char c;

  printf("Enter number : ");
  scanf("%d", &num);

  getchar();

  printf("Enter character : ");
  scanf("%c", &c);

  printf("num : %d\n", num);
  printf("Entered character : %c", c);
  return 0;
}