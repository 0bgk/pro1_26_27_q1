#include <iostream>

int main() {
  int a1, b1, a2, b2;
  std::cin >> a1 >> b1 >> a2 >> b2;

  int x, y;

  if(a1 >= a2) x = a1;
  else x = a2;

  if(b1 <= b2) y = b1;
  else y = b2;

  if(x <= y) std::cout << '[' << x << ',' << y << ']' << std::endl;
  else std::cout << "[]" << std::endl;

  return 0;
}
