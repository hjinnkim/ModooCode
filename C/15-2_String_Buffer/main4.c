// We need to clear buffer

// fflush is dangerous on gcc

#include <stdio.h>
int main() {
  int num;
  char c;
  char temp;
  char temp1;

  printf("Enter number : ");
  scanf("%d", &num);

  temp = getchar();

  printf("Enter char : ");
  scanf("%c", &c);

  printf("num : %d\n", num);
  printf("char : %c\n", c);
  printf("temp : %c\n", temp);
  printf("temp1 : %c\n", temp1);

  return 0;
}