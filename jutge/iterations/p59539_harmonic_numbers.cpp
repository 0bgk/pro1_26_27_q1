#include <iostream>

int main() {
  std::cout.setf(std::ios::fixed);
  std::cout.precision(4);
 
  int n;
  std::cin >> n;
 
  double hn = 0;
  for(int i = 1; i <= n; ++i) hn += 1./i;
   
  std::cout << hn << std::endl;
  
  return 0;
}
