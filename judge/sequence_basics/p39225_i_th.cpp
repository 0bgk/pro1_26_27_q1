#include <iostream>
using namespace std;
int main() {
  int i, n, w;
  cin >> i;
  w = i;
  while(cin >> n && i > 0) {
    if (i == 1) cout << "At the position " << w << " there is a(n) " << n << "." << endl;
    --i;
  }
}
