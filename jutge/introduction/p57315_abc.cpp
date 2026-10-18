#include <iostream>
#include <string>

int main() {
  int x, y, z;
  std::string order;

  std::cin >> x >> y >> z;
  std::cin >> order;

  int a, b, c;

  // define min 
  if(x <= y && x <= z) a = x;
  else if(y <= x && y <= z) a = y;
  else a = z;

  // define max
  if(x >= y && x >= z) c = x;
  else if(y >= x && y >= z) c = y;
  else c = z;

  // define mid
  b = x + y + z - a - c; 

  if (order == "ABC") std::cout << a << ' ' << b << ' ' << c << std::endl; 
  else if (order == "ACB") std::cout << a << ' ' << c << ' ' << b << std::endl; 
  else if (order == "BAC") std::cout << b << ' ' << a << ' ' << c << std::endl; 
  else if (order == "BCA") std::cout << b << ' ' << c << ' ' << a << std::endl; 
  else if (order == "CAB") std::cout << c << ' ' << a << ' ' << b << std::endl; 
  else std::cout << c << ' ' << b << ' ' << a << std::endl; 
  
  return 0;
}
