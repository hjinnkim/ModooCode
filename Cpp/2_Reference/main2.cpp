#include <iostream>

int main(){
    int a = 3;
    int& another_a = a; // reference requires what this refer to
                        // pointer does not need to be initialized
                        // int & another_a -> impossible


    another_a = 5;

    std::cout << "a = " << a << std::endl;
    std::cout << "another_a = " << another_a << std::endl;

    return 0;
}