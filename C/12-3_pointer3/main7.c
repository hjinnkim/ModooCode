#include <stdio.h>

int main(){
    int arr[2][3];
    int brr[10][3];
    int crr[2][5];

    int(*parr)[3];
    parr = arr; //ok
    parr = brr; //ok
    parr = crr; //error

    return 0;
}