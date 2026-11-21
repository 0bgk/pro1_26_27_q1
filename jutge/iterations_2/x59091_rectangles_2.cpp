#include <iostream>
using namespace std;
int main() {
  int n, m;
  bool first_iter = true;
  while (cin >> n >> m) {
    if (!first_iter) cout << endl;
    first_iter = false;
    int digit = 9;
    for (int row = 0; row < n; ++row) {
      for (int col = 0; col < m; ++col) {
        cout << digit;
        if (digit == 0) digit = 9;
        else --digit;
      }
      cout << endl;
    }
  }
}
