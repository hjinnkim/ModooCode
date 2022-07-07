#include <iostream>

int main(){
    int a = 3;
    int& another_a = a; 
    
    int b = 3;
    another_a = b; // substitute value of a with value of b
                   // does not mean another_a refers to b
                   // in other words, that means a=b;
                   // &another = b means &a = b -> impossible

    std::cout << "a = " << a << std::endl;
    std::cout << "another_a = " << another_a << std::endl;

    return 0;
}