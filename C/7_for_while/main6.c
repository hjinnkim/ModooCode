#include <stdio.h>

//Problem2

int main(){
    int N;
    
    printf("Problem2\n");
    printf("Enter N : ");
    scanf("%d", &N);

    for(int i=0; i<N; i++){
        for(int j=0; j<i; j++) printf(" ");
        for(int k=0; k<2*(N-i)-1; k++) printf("*");
        printf("\n");
    }

    return 0;
}