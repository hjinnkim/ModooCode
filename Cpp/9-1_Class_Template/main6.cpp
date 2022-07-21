#include <iostream>
#include <array>

int main() {
  // 마치 C 에서의 배열 처럼 {} 을 통해 배열을 정의할 수 있다.
  // {} 문법은 16 - 1 강에서 자세히 다루므로 여기서는 그냥 이렇게
  // 쓰면 되는구나 하고 이해하고 넘어가면 됩니다.
  std::array<int, 5> arr = {1, 2, 3, 4, 5};
  // int arr[5] = {1, 2, 3, 4, 5}; 와 동일

  for (int i = 0; i < arr.size(); i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;

}