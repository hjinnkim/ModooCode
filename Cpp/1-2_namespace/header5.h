#include <iostream>

namespace{
    int header_only_in_this_file = 0;
}

void print_heaader_only_in_this_file(){
    std::cout << "header5 : only in this file : " << header_only_in_this_file << std::endl;
}

void increase_only_in_this_file(){
    header_only_in_this_file += 1;
}