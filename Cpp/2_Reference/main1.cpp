#include <iostream>

int main(){
    int a = 3;
    int& another_a = a;  // referece means it is another name of other variable
    std::cout << "a = " << a << std::endl;
    std::cout << "another_a = " << another_a << std::endl;

    return 0;
}