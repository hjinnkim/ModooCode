#include <fstream>
#include <iostream>
#include <iostream>

int main(){
    std::ifstream in("test.txt");
    std::string s;

    if (in.is_open()){
        in >> s;
        std::cout << "s is : " << s << std::endl;
    }
    else{
        std::cout << "cannot find file" << std::endl;
    }

    in.close();
    in.open("other.txt");
    
    if(in.is_open()){
        in >> s;
        std::cout << "s is : " << s << std::endl;
    }
    else{
        std::cout << "cannot fine the file" << std::endl;
    }
    return 0;
}