#include <stdio.h>

// const pointer

int main(){
    int a, b;
    int* const pa = &a;
    // pa = &b; //error

    return 0;
}