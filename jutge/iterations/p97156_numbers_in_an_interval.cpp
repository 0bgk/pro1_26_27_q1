#include <iostream>

int main() {
  int a, b;
  std::cin >> a >> b;

  while (a <= b) {
    std::cout << a;
    if (a != b)
      std::cout << ',';
    a++;
  }

  std::cout << std::endl;

  return 0;
}
