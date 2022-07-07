// Default Constructor
#include <iostream>

class Date {
  int year_;
  int month_;  
  int day_;    

 public:
  void ShowDate();

  // Default constructor
  Date() {
    year_ = 2012;
    month_ = 7;
    day_ = 12;
  } 

  // Date() = default -> explicit default constructor defining 

  Date(int year, int month, int day) {
    std::cout << "3 arguments constructor called " << std::endl;
    year_ = year;
    month_ = month;
    day_ = day;
  } // Constructor overloading
};

void Date::ShowDate() {
  std::cout << "Today " << year_ << " year " << month_ << " month " << day_  << "day " << std::endl;
}

int main() {
  Date day = Date();
  Date day2;

  day.ShowDate();
  day2.ShowDate();

  return 0;
}