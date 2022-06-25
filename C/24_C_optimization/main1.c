// 나눗셈은 피하자

//int inc_second(int second) { return (++second) % 60; }

int inc_second(int second) {
  ++second;
  if (second >= 60) return 0;
  return second;
}

int main(){
    return 0;
}