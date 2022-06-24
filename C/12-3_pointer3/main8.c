#include <stdio.h>


// Address : 8 byte
// int : 4 byte

// parr[1][1] : *(*(parr + 1) + 1)

// parr : pointer to int -> increased by 8 byte
// *(parr + 1) -> increased by 2 index relative to int
// *(parr + 1) points to 3rrd element of arr
// (parr + 1) -> int *
// *(parr + 1) -> int type
// size of int : 4 byte
// *(*(parr + 1) + 1) -> points 7th element of arr

int main(){
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    // int **parr;

    //parr = arr; //error

    return 0;
}