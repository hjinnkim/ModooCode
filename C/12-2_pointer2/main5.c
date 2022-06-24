#include <stdio.h>

int main(){
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int* parr = arr;

    printf("sizeof(arr) : %lu\n", sizeof(arr));
    printf("sizeof(parr) : %lu\n", sizeof(parr));

    return 0;
}