#include <stdio.h>
int str_length(char *str);
int main() {
  char str[] = {"What is your name?"};

  printf("length of string : %d \n", str_length(str));

  return 0;
}
int str_length(char *str) {
  int i = 0;
  while (str[i]) { // excape loop when str[i] == 0 : NULL : end of string
    i++;
  }

  return i;
}