#include <iostream>
using namespace std;
// pre: 0 < x, y < 10^9
// post: returns x - y
int dif(int x, int y) {
  return x - y;
}
int main() {
  int x, y;
  cin >> x >> y;
  cout << dif(x, y) << endl;
}
