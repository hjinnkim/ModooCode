#include <stdio.h>

// int : -2147483648 ~ 2147483647

int main(){
    int a = 2147483647;
    printf("a : %d\n", a);

    a++;
    printf("a : %d\n", a);

    return 0;
}