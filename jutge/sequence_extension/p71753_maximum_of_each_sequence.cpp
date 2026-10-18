#include <iostream>
using namespace std;
int main() {
  int q;
  while(cin >> q) {
    int n, max;
    cin >> max;
    for(int i = q - 1; i > 0; --i) {
      cin >> n;
      if (n > max) max = n;
    }
    cout << max << endl;
  } 
}
