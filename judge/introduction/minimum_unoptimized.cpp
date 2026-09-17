#include <iostream>
#include <algorithm>

int main() {
  int x, y;

  std::cin >> x >> y;

  if(x < y) std::cout << x << std::endl;
  else std::cout << y << std::endl;

  return 0;
}
