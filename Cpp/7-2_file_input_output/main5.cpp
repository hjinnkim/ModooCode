#include <fstream>
#include <iostream>
#include <string>

int main(){
    std::ifstream in("test1.txt");
    char buf[100];

    if(!in.is_open()){
        std::cout << "cannot find the file" << std::endl;
        return 0;
    }
    while(in){
        in.getline(buf, 100);
        std::cout << buf << std::endl;
    }
    return 0;
}