#include "header1.h"
#include "header2.h"
#include <iostream>


namespace header1{
    int func(){
        std::cout << "header4.h : header2::bar() : ";
        header2::bar(); //call header2::bar()
        
        std::cout << "header4.h : foo() in header1 namespace : ";
        return foo();   //automatically call header1::foo()
    }
}