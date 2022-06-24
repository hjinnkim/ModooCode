#include <stdio.h>

int main(){
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printf(" Total size : %ld\n", sizeof(arr));
    printf("Total # of columns : %ld\n", sizeof(arr[0])/sizeof(arr[0][0]));
    printf("Total # of rows : %ld\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}