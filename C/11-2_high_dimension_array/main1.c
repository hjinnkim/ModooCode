#include <stdio.h>

// 2-dimensional array
// Memory is always actually 1-dimensional

int main(){
    //Memory is 1-dimensioanl
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    //recommended
    int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("arr[1][2] : %d\n", arr[1][2]);
    printf("arr[0][1] : %d\n", arr[0][1]);

    return 0;
}