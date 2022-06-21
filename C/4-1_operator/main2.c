#include <stdio.h>

// Divider '/' invokes type casting

int main(){
    int a;
    double b;

    a = 10;
    b = 3;

    // operator invokes type casting on a from int to double
    printf("a / b : %f\n", a/b);
    printf("b / a : %f\n", b/a);
    
    return 0;
}