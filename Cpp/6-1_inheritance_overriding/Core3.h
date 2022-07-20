#include <string>
#include <iostream>


class Base {
  std::string parent_string;

 public:
  Base() : parent_string("base") {  std::cout << "Base Class" <<  std::endl; }

  void what() {  std::cout << parent_string <<  std::endl; }
};

class Derived : public Base{ // if public, error occurs
  std::string child_string;

  public:
  Derived() : child_string("derived"), Base() {
    std::cout << "derived class" << std::endl;
    parent_string = "changed";
  }

  void what() { std::cout << child_string << std::endl; } // overriding
};