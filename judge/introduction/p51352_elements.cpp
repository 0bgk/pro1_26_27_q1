#include <iostream>

int main() {
  char a, b;
  std::cin >> a >> b;

  bool first_wins = (a == 'V' || b == 'V') && (a != 'P' && b != 'P') ? a > b : a < b;
 
  if (a == b) std::cout << '-' << std::endl;
  else if (first_wins) std::cout << 1 << std::endl; 
  else std::cout << 2 << std::endl;

  return 0;
}
