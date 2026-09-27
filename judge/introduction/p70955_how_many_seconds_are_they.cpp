#include <iostream>

int main() {
  long y, d, h, m, s;
  std::cin >> y >> d >> h >> m >> s;
  
  long ys = y * 365 * 24 * 3600;
  long ds = d * 24 * 3600;
  long hs = h * 3600;
  long ms = m * 60;

  std::cout << ys + ds + hs + ms + s << std::endl;

  return 0;
}
