// 루프에서는 되도록 0과 비교하라

    // for (i = 0; i < 10; i++) {
    //   printf("a");
    // }

    // for (i = 9; i != 0; i--) {
    //   printf("a");
    // }

// 이것보다
    // int i;
    // for (i = 1; i <= 3; i++) {
    // func(i);
    // }

// 이게 낫다
    // func(1);
    // func(2);
    // func(3);


// IF else보다 switch 사용

// 룩업 테이블 사용하기
char* Condition_String1(int condition) {
  switch (condition) {
    case 0:
      return "EQ";
    case 1:
      return "NE";
    case 2:
      return "CS";
    case 3:
      return "CC";
    case 4:
      return "MI";
    case 5:
      return "PL";
    case 6:
      return "VS";
    case 7:
      return "VC";
    case 8:
      return "HI";
    case 9:
      return "LS";
    case 10:
      return "GE";
    case 11:
      return "LT";
    case 12:
      return "GT";
    case 13:
      return "LE";
    case 14:
      return "";
    default:
      return 0;
  }
}

// 위보다 이게 낫다.
char* Condition_String2(int condition) {
  if ((unsigned)condition >= 15) {
    return 0;
  }
  char* table[] = {"EQ", "NE", "CS", "CC", "MI", "PL", "VS",
                   "VC", "HI", "LS", "GE", "LT", "GT", "LE"};
  return table[condition];
}

// 함수의 호출에도 시간이 걸린다

    // #include <stdio.h> void print_a();

    // int main() {
    // int i;
    // for (i = 0; i < 10; i++) {
    //     print_a();
    // }
    // return 0;
    // }
    // void print_a() { printf("a"); }

// 아래가 더 빠름
    // #include <stdio.h>
    // void print_a();
    // int main() {
    // print_a();
    // return 0;
    // }
    // void print_a() {
    // int i;
    // for (i = 0; i < 10; i++) {
    //     printf("a");
    // }
    // }

// 그래서 inline 함수 사용하기
// inline은 함수처럼 보이지만 함수가 아님
// 매크로처럼 작동하지만 컴파일러가 효율을 계산해서 훨씬 빠름

    // include <stdio.h>
    // int max(int a, int b) {
    // if (a > b) return a;
    // return b;
    // }
    // __inline int imax(int a, int b) {
    // if (a > b) return a;

    // return b;
    // }
    // int main() {
    // printf("4 와 5 중 큰 것은?", max(4, 5));
    // printf("4 와 5 중 큰 것은?", imax(4, 5));
    // return 0;
    // }