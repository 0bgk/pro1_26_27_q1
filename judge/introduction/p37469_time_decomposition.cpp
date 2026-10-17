#include <iostream>

int main() {
  const int SECONDS_PER_HOUR = 3600;
  const int SECONDS_PER_MIN = 60;
  long n;
  std::cin >> n;

  long h = n / SECONDS_PER_HOUR;
  n -= h * SECONDS_PER_HOUR;
  int m = n / SECONDS_PER_MIN;
  n -= m * SECONDS_PER_MIN;
  int s =  n;

  std::cout << h << " " << m << " " << s << std::endl;

  return 0;
}
