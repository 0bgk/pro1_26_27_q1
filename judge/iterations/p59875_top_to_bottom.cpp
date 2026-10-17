#include <iostream>

int main() {
  int x, y;
  std::cin >> x >> y;

  int max = x > y ? x : y;
  int min = x < y ? x : y;
  // Alternative: 'int min = x + y - max;' — avoided because x + y can overflow int.

  for(int i = max; i >= min; --i) std::cout << i << std::endl;

  return 0;
}
