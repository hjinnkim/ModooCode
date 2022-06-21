#include <stdio.h>

//bit operator

int main(){
    int a = 0xAF; // 10101111
    int b = 0xB5; // 10110101

    printf("%x \n", a & b); // a & b = 10100101
    printf("%x \n", a | b); // a | b = 10111111
    printf("%x \n", a ^ b); // a & b = 00011010
    printf("%x \n", ~a); // ~a = 01010000
    printf("%x \n", a << 2); // a << 2 = 10111100
    printf("%x \n", b >> 3); // b >> 3 = 00010110

    // int is 4byte, 32 bit -> 0000 0000 0000 0000

    return 0;
}