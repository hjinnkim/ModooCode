#include <iostream>
#include <string>

class Base {
  std::string s;

 public:
  Base() : s("Base") { std::cout << "Base Class" << std::endl; }

  void what() { std::cout << s << std::endl; }
};
class Derived : public Base {
  std::string s;

 public:
  Derived() : s("Derived"), Base() { std::cout << "Derived Class" << std::endl; }

  void what() { std::cout << s << std::endl; }
};
int main() {
  std::cout << " === Base Class Generation ===" << std::endl;
  Base p;

  p.what();

  std::cout << " === Derived Class Generation ===" << std::endl;
  Derived c;

  c.what();

  Base* p_c = &c; // Upcasting 
  p_c->what();

  Derived* p_c2 = &c;
  p_c2->what();

//   Derived* p_p = &p; // error

  std::cout << "----------------\n";

  Base* p_p = &c;
//   Derived* p_p2 = p_p; // error but we know that p_p points Derived* 
  Derived* p_p2 = static_cast<Derived*>(p_p); // no error but it is "Downcasting"

  p_p->what();
  p_p2->what(); // runtime error can occur. not recommended

//   p_p2 = dynamic_cast<Derived*>(p_p); // error, need to be polymorphic class type

  return 0;
}