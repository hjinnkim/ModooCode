#include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int* parr = arr;
    int sum=10;

    while(parr-arr <= 9){
        printf("parr - arr : %ld\n", parr-arr);
        sum += *parr;
        parr++;
    }

    printf("sum : %d\n", sum);

    return 0;
}