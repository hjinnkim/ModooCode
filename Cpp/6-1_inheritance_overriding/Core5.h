#include <string>
#include <iostream>


class Base {
 public:
  std::string parent_string;

  Base() : parent_string("base") {  std::cout << "Base Class" <<  std::endl; }

  void what() {  std::cout << parent_string <<  std::endl; }
};

class Derived : private Base{ // if public, error occurs
  std::string child_string;

  public:
  Derived() : Base(),child_string("derived") {
    std::cout << "derived class" << std::endl;
    parent_string = "changed";
  }

  void what() { std::cout << child_string << std::endl; } // overriding
};