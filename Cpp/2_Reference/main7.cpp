#include <iostream>

int main(){
    // Also, array of references are illegal
    // Because, reference does not possess memory if not necessary
    // what address exists means it exists on memory

    // References of array is possible
    int arr[3] = {1, 2, 3};
    int(&ref)[3] = arr;

    ref[0] = 0;
    ref[1] = 10;
    ref[2] = 20;

    std::cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << std::endl;

    // int arr2[3][2] = {1, 2, 3, 4, 5, 6};
    // int (&ref2)[3][2] = arr2;

    // same

    return 0;
}