#include <stdio.h>
typedef int CAL_TYPE;
int main() {
  CAL_TYPE input;
  CAL_TYPE a, b;

  while (1) {
    printf("--- Calculator --- \n");
    printf("1. plus \n");
    printf("2. minus \n");
    printf("3. exit \n");

    scanf("%d", &input);

    if (input == 1) {
      printf("two values : ");
      scanf("%d%d", &a, &b);
      printf("%d + %d  : %d \n", a, b, a + b);
    } else if (input == 2) {
      printf("two values : ");
      scanf("%d%d", &a, &b);
      printf("%d - %d : %d \n", a, b, a - b);
    } else
      break;
  }

  return 0;
}