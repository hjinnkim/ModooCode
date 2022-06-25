#include <stdio.h>
int main() {
  FILE *fp = fopen("a.txt", "r");
  fgetc(fp);
  fgetc(fp);
  fgetc(fp);
  fgetc(fp);
  /* Now cursor indicates 'o' */
  fseek(fp, 0, SEEK_SET);
  printf("First content of file : %c \n", fgetc(fp));
  fclose(fp);
  return 0;
}