#include <iostream>

class A {
 virtual void speak(){ std::cout << "1\n";}
 public:
  int a;
  void what(){speak();}
  A() {std::cout << "A constructor call\n";}
};

class B {
 public:
  int b;
  B() {std::cout << "B constructor call\n";}
};

class C : public A, public B { // multiple inherit
 void speak(){std::cout << "2\n";}
 public:
  int c;
  void what(){speak();}
  C() : A(), B() {std::cout << "C constructor call\n";}
};

class D : public B, public A { // multiple inherit
 void speak(){std::cout << "3\n";}
 public:
  int c;
  void what(){speak();}
  D() : A(), B() {std::cout << "D constructor call\n";}
};

class E : public B, public A { // multiple inherit
 void speak(){std::cout << "4\n";}
 public:
  int c;
  void what(){speak();}
  E() : B(), A() {std::cout << "E constructor call\n";}
};

//constructor call comparison

int main(){
    C c;
    std::cout << "-------------------\n";
    D d;
    std::cout << "-------------------\n";
    E e;

    A* a = &c;
    C* b = &c;

    a->what();
    b->what();

    return 0;
}