#include <iostream>

int main() {
  int n;
  std::cin >> n;

  n = n % 100 == 0 ? (n / 100) : n;

  if (n % 4 == 0) std::cout << "YES" << std::endl;
  else std::cout << "NO" << std::endl;

  return 0;
}
