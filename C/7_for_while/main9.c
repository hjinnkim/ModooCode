#include <stdio.h>

//Problem7

int main(){
    int N, i=2, oper=0;
    
    printf("Problem7\n");
    printf("Enter a positive integer : ");
    scanf("%d", &N);

    printf("N = %d = ", N);

    while(N!=1){
        oper+=1;
        if(!(N%i)){
            N/=i;
            printf("%d ",i);
        }
        else i+=1;
    }
    printf("\n");
    printf("oper : %d\n", oper);

    return 0;
}