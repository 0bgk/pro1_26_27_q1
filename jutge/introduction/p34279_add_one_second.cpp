#include <iostream>
using namespace std;
// pre: clock_time is a natural number
// post: prints clock time with 0 when clocktime <= 9
void print_clock_time(int clock_time) {
  if (clock_time <= 9) cout << '0' << clock_time;
  else cout << clock_time;
}
int main() {
  int sec_per_hour = 3600;
  int sec_per_min = 60;
  int h, m, s;
  cin >> h >> m >> s;
  ++s;
  int total_sec = (h * sec_per_hour) + (m * sec_per_min) + s;
  h = total_sec / sec_per_hour;
  total_sec -= h * sec_per_hour;
  m = total_sec / sec_per_min;
  total_sec -= m * sec_per_min;
  s = total_sec;
  h = h % 24;
  print_clock_time(h);
  cout << ':';
  print_clock_time(m);
  cout << ':';
  print_clock_time(s);
  cout << endl;
}
