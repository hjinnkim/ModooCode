#include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int* parr = arr;

    printf("%p\n", parr);

    parr = &arr[0];

    printf("%p\n", parr);

    printf("%d\n", *(parr+1));

    return 0;
}