#include <stdio.h>

//Problem 1

int main(){
    float f;
    int i;
    printf("Enter a number : ");
    scanf("%f", &f);

    i = (f-(int)f)*100;
    
    printf("i=%d\n", abs(i));

    return 0;

}