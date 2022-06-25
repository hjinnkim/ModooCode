#include <stdio.h>

// 나눗셈을 피하자

int main() {
  int i;
  printf("정수를 입력하세요 : ");
  scanf("%d", &i);

  printf("%d 를 32 로 나누면 : %d \n", i, i / 32);
  printf("%d 를 5 칸 쉬프트 하면 : %d \n", i, i >> 5);

  return 0;
}