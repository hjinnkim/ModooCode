#include <iostream>

namespace header2{
    int foo();
    void bar();
}

int header2::foo(){
    return 2;
}

void header2::bar(){
    std::cout<<"header2!\n";
}