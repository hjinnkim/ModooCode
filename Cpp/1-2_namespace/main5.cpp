#include <iostream>
#include "header5.h"

void print_only_in_this_file();

namespace{ // Something like static
    int OnlyInThisFile() {return 100;}

    int only_in_this_file = 0;
}

int main(){
    std::cout << OnlyInThisFile() << std::endl;
    std::cout << only_in_this_file << std::endl;
    print_only_in_this_file();
    
    only_in_this_file = 3;
    std::cout << only_in_this_file << std::endl;
    print_only_in_this_file();
    
    print_heaader_only_in_this_file();
    increase_only_in_this_file();
    print_heaader_only_in_this_file();

    std::cout << header_only_in_this_file << std::endl;

    return 0;
}

void print_only_in_this_file(){
    std::cout << only_in_this_file << std::endl;
}