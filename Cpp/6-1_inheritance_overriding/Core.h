#include <string>
#include <iostream>


class Base {
  std::string s;

 public:
  Base() : s("base") {  std::cout << "Base Class" <<  std::endl; }

  void what() {  std::cout << s <<  std::endl; }
};

class Derived : public Base{
  std::string s;

  public:
  Derived() : Base(), s("derived"){
    std::cout << "derived class" << std::endl;
    what();
  }
};