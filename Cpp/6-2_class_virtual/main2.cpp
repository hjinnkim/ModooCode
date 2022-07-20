#include <iostream>

class Base {

 public:
  Base() { std::cout << "Base Class" << std::endl; }

  virtual void what() { std::cout << "Base Class what()" << std::endl; }
};
class Derived : public Base {

 public:
  Derived() : Base() { std::cout << "Derived Class" << std::endl; }

  void what() { std::cout << "Derived Class what()" << std::endl; } 
};
int main() {
  Base p;
  Derived c;

  Base* p_c = &c;
  Base* p_p = &p;

  std::cout << " == Base Class Object == " << std::endl;
  p_p->what();

  std::cout << " == Derived Class Object== " << std::endl;
  p_c->what(); // what() function is called dynamic binding. At runtime, which funcion is called is determined

  return 0;
}