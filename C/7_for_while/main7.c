#include <stdio.h>

//Problem3

int main(){
    int sum=0;

    printf("Problem3\n");
    for(int i=1; i<=1000; i++) if(i%3 == 0 || i%5 == 0) sum+=i;

    printf("sum : %d\n", sum);

    return 0;
}