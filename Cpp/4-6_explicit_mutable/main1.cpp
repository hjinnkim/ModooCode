#include <iostream>

class MyString {
  char* string_content;  // 문자열 데이터를 가리키는 포인터
  int string_length;     // 문자열 길이

  int memory_capacity;

 public:
  // capacity 만큼 미리 할당함.
  explicit MyString(int capacity); // Add/Remove explicit keyword

  // 문자열로 부터 생성
  MyString(const char* str);

  // 복사 생성자
  MyString(const MyString& str);

  ~MyString();

  int length() const;
};

MyString::MyString(int capacity) {
  string_content = new char[capacity];
  string_length = 0;
  memory_capacity = capacity;
  std::cout << "Capacity : " << capacity << std::endl;
}

MyString::MyString(const char* str) {
  string_length = 0;
  while (str[string_length++]) {
  }

  string_content = new char[string_length];
  memory_capacity = string_length;

  for (int i = 0; i != string_length; i++) string_content[i] = str[i];
}
MyString::MyString(const MyString& str) {
  string_length = str.string_length;
  string_content = new char[string_length];

  for (int i = 0; i != string_length; i++)
    string_content[i] = str.string_content[i];
}
MyString::~MyString() { delete[] string_content; }
int MyString::length() const { return string_length; }

/*
void DoSomethingWithString(MyString s) {
  // Do something...
} 

DoSomethingWithString(MyString("abc")) -> explicit
DoSomethingWithString("abc") -> implicit

Then, compiler tends to find how to type cast "abc" to MyString object

In MyString class, there is an constructor that 

// 문자열로 부터 생성
MyString(const char* str); -> Implicit Conversion

DoSomethingWithString(3) -> Maybe mistacke but

// capacity 만큼 미리 할당함.
MyString(int capacity); -> Make it possible to implicit conversion :

DoSomethingWithString(MyString(3)) which is not intended

=> Add explicit keyword

*/

// explicit keyword prevents from the compiler to do implicit conversion

void DoSomethingWithString(MyString s) {
  // Do something...
}

int main(){
    // DoSomethingWithString(3);  // Implicit conversion
    MyString s1 = "abc";  // MyString s("abc")
    // MyString s2 = 5;      // copy constructor MyString s(5) // Also prevent
}