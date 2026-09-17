#include <iostream>
#include <algorithm>

int main() {
  int x, y, z;

  std::cin >> x >> y >> z;

  if(x <= y && x <= z) std::cout << x << std::endl;
  else if(y <= x && y <= z) std::cout << y << std::endl;
  else std::cout << z << std::endl;

  return 0;
}
