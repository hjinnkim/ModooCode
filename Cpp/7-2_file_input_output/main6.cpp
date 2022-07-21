#include <fstream>
#include <iostream>
#include <iostream>

int main(){
    std::ifstream in("test1.txt");

    if(!in.is_open()){
        std::cout << "cannot find the file" << std::endl;
        return 0;
    }

    std:: string s;
    while(in){
        getline(in, s);
        std::cout << s << std::endl;
    }
    return 0;
}