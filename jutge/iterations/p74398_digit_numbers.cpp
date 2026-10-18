#include <iostream>

using namespace std;

int main() {
  int k;
  cin >> k;

  for(int b = 2; b <= 16; ++b) {
    cout << "Base " << b << ": ";

    int n = k;
    int d = 1;
    while(n >= b) {
      n /= b;
      ++d;
    }
     
    cout << d << " cifras." << endl;
  }
}
