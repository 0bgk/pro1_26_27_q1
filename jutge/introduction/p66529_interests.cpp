#include <iostream>
#include <cmath>

int main () {
  std::cout.setf(std::ios::fixed);
  std::cout.precision(4);
  
  double i; //interest
  std::string p; // period 

  std::cin >> i >> p;

  int pn = 52; // period number (setmanal by default)
  
  if (p == "mensual") pn = 12;
  else if (p == "trimestral") pn = 4;
  else if (p == "semestral") pn = 2;
  
  double pi = i / pn; // proporcional interest 
  double tpi = (100 + pi) / 100; // total proporcional interest   
  double b = pow(tpi, pn) - 1; // profit
  double tae = 100 * b;

  std::cout << tae << std::endl; 
    
  return 0;
}
