#include <stdio.h>

//scanf("%s", ~) wait until relative value comes
//Thus, ignore remaining ' ', '\n', '\t' on buffer

int main() {
  char str[30];
  int i;

  scanf("%d", &i);
  scanf("%s", str);

  printf("str : %s", str);

  return 0;
}