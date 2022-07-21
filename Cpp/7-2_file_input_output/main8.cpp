#include <fstream>
#include <iostream>
#include <string>

int main(){
    std::ofstream out("test2.txt", std::ios::app);

    std::string s;
    if(out.is_open()){
        out << "Add this";
    }
    return 0;
}
