int& function(int& a) {
  a = 5;
  return a;
}

int main() {
  int b = 2;
  int c = function(b); // returns reference to b
  return 0;
}