#include <stdio.h>

// Give an array as an argument

int add_number(int* parr);

int main(){
    int arr[3] = {1, 4, 6};
    int sum = add_number(arr);
    printf("arr[0] : %d, arr[1] : %d, arr[2] : %d\n", arr[0], arr[1], arr[2]);
    printf("sum of arr : %d\n", sum);

    return 0;
}

int add_number(int* arr){
    int sum = 0;
    for(int i=0; i<3; i++)
        sum += arr[i];
    return sum;
}