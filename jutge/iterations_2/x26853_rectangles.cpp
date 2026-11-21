#include <iostream>
using namespace std;
int main() {
  int n, m;
  bool first_iter = true;
  while (cin >> n >> m) {
    if (!first_iter) cout << endl;
    first_iter = false;
    int rest = (n + m) % 5;
    for (int row = 0; row < n; ++row) {
      for (int col = 0; col < m; ++col) cout << rest;
      cout << endl;
    }
  }
}
