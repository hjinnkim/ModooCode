#include <iostream>

int main(){
    int arr_size;
    std::cout << "arr_size : ";
    std::cin >> arr_size;

    int *list = new int[arr_size];
    for(int i=0; i<arr_size; i++){
        list[i] = i;
        std::cout << list[i] << std::endl;
    }

    delete[] list;

    return 0;
}