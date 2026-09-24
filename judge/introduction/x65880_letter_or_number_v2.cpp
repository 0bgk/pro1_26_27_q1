#include <iostream>
#include <cctype>

int main() {
  char c;

  std::cin >> c;

  if (std::islower(c)) std::cout << "Lowercase letter" << std::endl;
  else if (std::isupper(c)) std::cout << "Uppercase letter" << std::endl;
  else std::cout << "Number" << std::endl;

  return 0;
}
