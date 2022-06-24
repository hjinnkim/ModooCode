#include <stdio.h>

//scanf get value until meets ' ', '\n', '\t'
// Then, scanf("%c", ~) got the '\n'

int main() {
  int num;
  char c;

  printf("숫자를 입력하세요 : ");
  scanf("%d", &num);

  printf("문자를 입력하세요 : ");
  scanf("%c", &c);
  return 0;
}