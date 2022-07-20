#include <iostream>

class Parent {
 public:
  Parent() { std::cout << "Parent Constructor Call" << std::endl; }
  virtual ~Parent() { std::cout << "Parent Destructor Call" << std::endl; } // Base class destructor needs to be virtual
};
class Child : public Parent {
 public:
  Child() : Parent() { std::cout << "Child Constructor Call" << std::endl; }
  ~Child() { std::cout << "Child Destructor Call" << std::endl; }
};
int main() {
  std::cout << "--- Ordinary Child Generation ---" << std::endl;
  { Child c; }
  std::cout << "--- Parent Pointer points Child ---" << std::endl;
  {
    Parent *p = new Child();
    delete p; 
  }
}