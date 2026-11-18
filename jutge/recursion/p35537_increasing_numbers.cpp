#include <iostream>
using namespace std;
// pre: n is a natural number
// post: returns true if n is increasing
bool is_increasing(int n) {
  if (n == 0) return true;
  return n/10%10 <= n%10 && is_increasing(n/10);
}
int main() {
  int n;
  cin >> n;
  cout << is_increasing(n) << endl;
}

