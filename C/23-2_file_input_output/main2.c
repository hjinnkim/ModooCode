#include <stdio.h>

int main() {
  FILE *fp = fopen("some_data.txt", "r");
  char data[10];
  char c;

  if (fp == NULL) {
    printf("file open error ! \n");
    return 0;
  }
  
  //SEEK_END : EOF

  fseek(fp, -1, SEEK_END);
  c = fgetc(fp);
  printf("Last character of file : %c \n", c);

  fclose(fp);
}