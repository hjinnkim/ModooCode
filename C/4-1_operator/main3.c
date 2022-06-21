#include <stdio.h>

// operator priority : '+' is prior to '=' in order

int main(){
    int a = 3;
    a += 3;
    printf("a : %d\n", a);

    return 0;
}