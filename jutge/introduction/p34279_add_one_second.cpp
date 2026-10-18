#include <iostream>
#include <iomanip>

int main() {
  const int SECONDS_PER_HOUR = 3600;
  const int SECONDS_PER_MIN = 60;
  int h, m, s;

  std::cin >> h >> m >> s;
  
  s++;
  int ts = (h * SECONDS_PER_HOUR) + (m * SECONDS_PER_MIN) + s;

  h = ts / SECONDS_PER_HOUR;
  ts -= h * SECONDS_PER_HOUR;
  m = ts / SECONDS_PER_MIN;
  ts -= m * SECONDS_PER_MIN;
  s =  ts;

  std::cout << std::setfill('0') << std::setw(2) << h % 24 << ':' << std::setw(2) << m << ':' << std::setw(2) << s << std::endl; 

  return 0;
}
