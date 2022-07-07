// int function() {
//   int a = 5;
//   return a;
// }

// int main() {
//   int& c = function();
//   return 0;
// } function return value extincts after calling 
// referring to this return value makes it dangling reference

// But

#include <iostream>

int function() {
  int a = 5;
  return a;
}

int main() {
  const int& c = function(); // The extinction of function() return value is delayed until const int& c extincts
  std::cout << "c : " << c << std::endl;
  return 0;
}