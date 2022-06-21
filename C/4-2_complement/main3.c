#include <stdio.h>

int main(){

    // overflow of unsigned int
    unsigned int b = 4294967295;
    printf("b : %u\n", b);

    b++;

    printf("b : %u\n", b);

    return 0;
}