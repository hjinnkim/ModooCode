#include <iostream>

class Animal { // abstract class which has pure virtual function : virtual void speak()
 public:
  Animal() {}
  virtual ~Animal() {}
  virtual void speak() = 0; // must be overriden
};

class Dog : public Animal {
 public:
  Dog() : Animal() {}
  void speak() override { std::cout << "왈왈" << std::endl; }
};

class Cat : public Animal {
 public:
  Cat() : Animal() {}
  void speak() override { std::cout << "야옹야옹" << std::endl; }
};

int main() {
  Animal* dog = new Dog();
  Animal* cat = new Cat();

  dog->speak();
  cat->speak();
}