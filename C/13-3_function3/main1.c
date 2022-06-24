#include <stdio.h>

// Got 2 dimensional array as an argument

int add1_element(int (*arr)[2], int row);

int main(){
    int arr[3][2] = {{1, 2}, {3, 4}, {5, 6}};
    add1_element(arr, 3);

    for(int i=0; i<3; i++)
        for(int j=0; j<2; j++)
            printf("arr[%d][%d] : %d\n", i, j, arr[i][j]);
    return 0;
}

int add1_element(int (*arr)[2], int row){
    for(int i=0; i<row; i++)
        for(int j=0; j<2; j++)
            arr[i][j] += 1;

    return 0;
}