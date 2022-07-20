#include <iostream>
#include <string>

int main(){
    std::string s = "abc";
    std::string t = "def";
    std::string s2 = s;

    std::cout << "lengh of " << s << "is " << s.length() << std::endl;

    std::cout << s << " + " << t << "is : " << s+t << std::endl;
    
    if (s==s2){
        std::cout << s << " = " << s2 << std::endl;
    }
    if (s!=t){
        std::cout << s << " != " << t << std::endl;
    }

    return 0;
}