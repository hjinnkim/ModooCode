#include <stdio.h>

int main() {
  FILE *fp = fopen("a.txt", "r");
  char c;

  // fgetc : input one charater
  // EOF : End Of File
  while ((c = fgetc(fp)) != EOF) {
    printf("%c", c);
  }

  fclose(fp);
  return 0;
}