#include <iostream>
using namespace std;
// pre: n is a natural number
// post: assigns hour: h, minutes: m and seconds: s with its conversion
void decompose(int n, int &h, int &m, int &s) {
  h = n / 3600;
  m = n % 3600 / 60;
  s = n % 60 ;
}
int main() {
  int n, h, m, s;
  cin >> n;
  decompose(n, h, m, s);
  cout << h << ' ' << m << ' '  << s << endl;
}
