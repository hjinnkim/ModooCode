#include <iostream>

namespace header1{
    int foo();
    void bar();
}

int header1::foo(){
    return 1;
}

void header1::bar(){
    std::cout<<"header1!\n";
}