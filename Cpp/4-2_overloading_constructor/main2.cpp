#include <iostream>

//Function overloading

class Date{
    int year_;
    int month_;
    int day_;

    public:
        void setDate(int year, int month, int date);
        void addDay(int inc);
        void addMonth(int inc);
        void addYear(int inc);

        int GetCurrentMonthTotalDays(int year, int month);
        void showDate();
};

void Date::setDate(int year, int month, int day){
    year_ = year;
    month_ = month;
    day_ = day;
}

int Date::GetCurrentMonthTotalDays(int year, int month){
    static int month_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(month!=2){
        return month_day[month-1];
    }
    else if(year % 4 == 0 && year % 100 != 0){
        return 29;
    }
    else{
        return 28;
    }
}

void Date::addDay(int inc) {
  while (true) {
    int current_month_total_days = GetCurrentMonthTotalDays(year_, month_);

    if (day_ + inc <= current_month_total_days) {
      day_ += inc;
      return;
    } else {
      inc -= (current_month_total_days - day_ + 1);
      day_ = 1;
      addMonth(1);
    }
  }
}

void Date::addMonth(int inc) {
  addYear((inc + month_ - 1) / 12);
  month_ = month_ + inc % 12;
  month_ = (month_ == 12 ? 12 : month_ % 12);
}

void Date::addYear(int inc) { year_ += inc; }

void Date::showDate() {
  std::cout << "Today " << year_ << " year " << month_ << " month " << day_
            << " day " << std::endl;
}

int main() {
  Date day;
  day.setDate(2011, 3, 1);
  day.showDate();

  day.addDay(30);
  day.showDate();

  day.addDay(2000);
  day.showDate();

  day.setDate(2012, 1, 31);  
  day.addDay(29);
  day.showDate();

  day.setDate(2012, 8, 4);
  day.addDay(2500);
  day.showDate();
  return 0;
}