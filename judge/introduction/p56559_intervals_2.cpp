#include <iostream>

int main() {
  int a1, b1, a2, b2;
  std::cin >> a1 >> b1 >> a2 >> b2;

  if(a1 == a2 && b1==b2) std::cout << '=' << std::endl;
  else if(a1 >= a2 && b1 <= b2) std::cout << '1' << std::endl;
  else if(a2 >= a1 && b2 <= b1) std::cout << '2' << std::endl;
  else std::cout << '?' << std::endl;

  return 0;
}
