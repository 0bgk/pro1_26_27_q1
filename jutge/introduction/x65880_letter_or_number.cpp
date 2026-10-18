#include <iostream> 

int main() {
  char c;

  std::cin >> c;
 
  if(c >= 'a' && c <= 'z') std::cout << "Lowercase letter" << std::endl;
  else if(c >= 'A' && c <= 'Z') std::cout << "Uppercase letter" << std::endl;
  else std::cout << "Number" << std::endl;

  return 0;
}
