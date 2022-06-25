#include <stdio.h>
#include <stdlib.h>

int main() {
  char str[50] = "I love Chewing C hahaha";
  char str2[50];
  char str3[50];

  memcpy(str2, str, strlen(str) + 1);
  memcpy(str3, "hello", 6);

  printf("%s \n", str);
  printf("%s \n", str2);
  printf("%s \n", str3);

  printf("strlen(str) : %ld\n", strlen(str));

  // Null is not counted by strlen

  return 0;
}