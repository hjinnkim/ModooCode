#include <string>
#include <iostream>

class Manager {
  std::string name;
  int age;

  std::string position;  // 직책 (이름)
  int rank;              // 순위 (값이 클 수록 높은 순위)
  int year_of_service;

 public:
  Manager(std::string name, int age, std::string position, int rank,
          int year_of_service)
      : year_of_service(year_of_service),
        name(name),
        age(age),
        position(position),
        rank(rank) {}

  // 복사 생성자
  Manager(const Manager& manager) {
    name = manager.name;
    age = manager.age;
    position = manager.position;
    rank = manager.rank;
    year_of_service = manager.year_of_service;
  }

  // 디폴트 생성자
  Manager() {}

  int calculate_pay() { return 200 + rank * 50 + 5 * year_of_service; }
  void print_info() {
    std::cout << name << " (" << position << " , " << age << ", "
              << year_of_service << "년차) ==> " << calculate_pay() << "만원"
              << std::endl;
  }
};