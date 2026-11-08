#include <iostream>
using namespace std;
int main() {
  int b, n;
  while(cin >> b >> n) {
    int digits = 0;
    while(n > 0) {
      ++digits;
      n /= b;
    }
    cout << digits << endl;
  }
}
