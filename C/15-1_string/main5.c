#include <stdio.h>
int main() {
  char words[30];

  printf("Enter string within 30 characters! : ");
  scanf("%s", words);

  printf("문자열 : %s \n", words);

  return 0;
}