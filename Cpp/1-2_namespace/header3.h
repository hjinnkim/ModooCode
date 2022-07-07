#include "header1.h"

namespace header1
{
    int func(){
        return foo(); //automatically call header1::foo()
    }
}