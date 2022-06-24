#include <stdio.h>

int main(){
    int a, b;
    float c, d;

    printf("Enter two integers : ");
    scanf("%d%d", &a, &b);

    c = a/b;
    d = (float)a/b;
    printf(" a/b : %f %f\n", c, d);

    return 0;
}