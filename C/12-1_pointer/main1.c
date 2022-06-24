#include <stdio.h>

// *, & operator
// * : pointer
// & : return address

int main(){
    int a;
    a = 2;
    int* ap = &a;

    printf("%p \n", &a);
    printf("%x \n", &a);
    printf("%d \n", *ap);

    return 0;
}