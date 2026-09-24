#include <iostream>
#include <algorithm>

int main() {
  int x, y, z;

  std::cin >> x >> y >> z;
  std::cout << std::min({x, y, z}) + std::max({x, y, z}) << std::endl;

  return 0;
}
