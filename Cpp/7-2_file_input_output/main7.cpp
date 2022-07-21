#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ofstream out("test2.txt");
    std::string s;

    if(out.is_open()){
        out << "write this";
    }
    return 0;
}