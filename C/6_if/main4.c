#include <stdio.h>

// Logic operator '&&'

int main(){
    int a;
    printf("Enter any number : ");
    scanf("%d", &a);

    if (a>10 && a< 20) printf("%d is larger than 10, smaller than 20\n", a);

    return 0;
}