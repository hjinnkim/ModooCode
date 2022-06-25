#include <stdio.h>
int main(int argc, char **argv) {
  printf("# of arguments of main : %d \n", argc);
  printf("Path of this program : %s \n", argv[0]);
  for (int i = 0; i < argc; i++) {
    printf("What this program receives? : %s \n", argv[i]);
  }
  return 0;
}