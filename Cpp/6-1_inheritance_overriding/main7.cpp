#include "Core5.h"

int main(){
    Base p;
    std::cout << p.parent_string << std::endl; // Base parent_string is public


    Derived c;
    // std::cout << c.parent_string << std::endl; // Derived inherit parent_string as private

    return 0;
}