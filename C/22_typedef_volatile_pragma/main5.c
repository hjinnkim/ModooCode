#include <stdio.h>
struct Weird {
  char arr[2];
  int i;
};

#pragma pack(1)
struct Weird2{
  char arr[2];
  int i;
};

// #pragma pack means do not put this double word boundary
// compiler want to locate variables on multiples of 4byte region
// pack(1) means allocate memory 1 byte unit

int main() {
  struct Weird a;
  struct Weird2 b;
  printf("size of a : %ld \n", sizeof(a));
  printf("size of b : %ld \n", sizeof(b));
  
  return 0;
}