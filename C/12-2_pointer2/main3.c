#include <stdio.h>

int main(){
    int a;
    int* pa;

    char b;
    char* pb;

    pa = &a;
    pb = &b;

    printf("%p\n", pa);
    printf("%p\n", pa+1);
    printf("%p\n", pb);
    printf("%p\n", pb+1);

    return 0;
}