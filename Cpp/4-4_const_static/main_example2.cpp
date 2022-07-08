#include <iostream>


class test_class{
  int x=1;
  int y=10;

  public:
    // int test2() const {x+=1; return y;} // error
    int test3() {x+=1; return y;}
    void show(){std::cout << x << ' ' << y << std::endl;}
};

int main(){
  test_class testcls;
  // testcls.test2();
  // testcls.show();
  testcls.test3();
  testcls.show();
}