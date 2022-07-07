#include <iostream>

// static variables are stored in 'stack'
// dynamically allocated variables or others are stored in 'heap'
// 'heap' must be dealt with caution

int main(){
    int* p = new int; // allocate memory to p
    *p = 10;

    std::cout << *p << std::endl;

    delete p;
    
    return 0;
}