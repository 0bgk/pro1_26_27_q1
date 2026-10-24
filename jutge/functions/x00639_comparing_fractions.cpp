#include <iostream>
using namespace std;
// pre: d1 and d2 > 0
// post: returns true when iff n1/d1 < n2/d2
bool c_frac(int n1, int d1, int n2, int d2) {
  return n1 * d2 < n2 * d1; 
}
int main() {
  int n1, d1, n2, d2;
  cin >> n1 >> d1 >> n2 >> d2;
  if (c_frac(n1, d1, n2, d2)) cout << "yes" << endl;
  else cout << "no" << endl;
}
