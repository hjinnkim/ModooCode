#include <iostream>
#include <string>

class Base {
  std::string s;

 public:
  Base() : s("기반") { std::cout << "Base Class" << std::endl; }

  virtual void incorrect() { std::cout << "Base Class" << std::endl; }
};
class Derived : public Base {
  std::string s;

 public:
  Derived() : Base(), s("파생") {}

  void incorrect() override { std::cout << "Derived Class " << std::endl; } // we can explicitly override the virtual function 
};
int main() {
  Base p;
  Derived c;

  Base* p_c = &c;
  Base* p_p = &p;

  std::cout << " == Base Class Object == " << std::endl;
  p_p->incorrect();

  std::cout << " == Derived Class Object == " << std::endl;
  p_c->incorrect();
  return 0;
}