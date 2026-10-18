#include <iostream>

using namespace std;

int main() {
  int x, n;
  cin >> x;
 
  int m = 0;
  while(cin >> n) {
    if (n % x == 0) ++m;
  }

  cout << m << endl;
}
