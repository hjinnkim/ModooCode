#include <fstream>
#include <iostream>
#include <string>

int main(){
    std::ofstream out1("test3.txt");
    std::ofstream out2("test4.txt");

    out1 << "abc";
    out2 << "abc";
    out1.close();
    out2.close();
    out1.open("test3.txt", std::ios::app);
    out2.open("test4.txt");
    out2.open("test4.txt", std::ios::ate); // does not protect original contents

    out1.seekp(3, std::ios::beg);
    out2.seekp(3, std::ios::beg);
    out1 << "add";
    // out2 << "add";

    return 0;
}