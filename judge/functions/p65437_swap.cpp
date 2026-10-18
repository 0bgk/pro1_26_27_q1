#include <iostream>
using namespace std;
// pre: ---
// post: swap a for b
void swap2(int &a, int &b) {
  int t = a;
  a = b;
  b = t;
}
int main() {
  int a, b;
  cin >> a >> b;
  swap2(a, b);
  cout << a << ' ' << b << endl;
}
