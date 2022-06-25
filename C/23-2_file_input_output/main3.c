#include <stdio.h>
int main() {
  FILE *fp = fopen("some_data.txt", "r+"); // read and write
  // w+ is same but, if file exist, clear it and if not exists, create
  char data[100];

  fgets(data, 100, fp);
  printf("Currently on file : %s \n", data);

  fseek(fp, 6, SEEK_SET);

  fputs("is nothing on this file", fp);

  fclose(fp);
}