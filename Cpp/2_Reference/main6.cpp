#include <iostream>

int main(){
    // int& ref = 4; // cannot refer to 'literal'
                  // that means ref = 5 -> can change literal which is impossible
    const int & ref = 4;

    return 0;
}