#include <iostream>
#include <cctype>

int main() {
  char c;
  std::cin >> c;
  
  if (std::islower(c)) std::cout << char('A' + (c - 'a')) << std::endl;
  else std::cout << char('a' + (c - 'A')) << std::endl;

  return 0;
}
