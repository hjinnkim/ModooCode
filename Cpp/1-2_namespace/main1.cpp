#include <iostream>
#include "header1.h"
#include "header2.h"

int main(){
    header1::bar();
    std::cout << header1::foo() << std::endl;

    std::cout << "---------------\n";
    header2::bar();
    std::cout << header2::foo() << std::endl;
    
    return 0;
}