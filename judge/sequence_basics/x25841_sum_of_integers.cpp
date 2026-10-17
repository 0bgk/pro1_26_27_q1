#include <iostream>

using namespace std;

int main() {
  int n;

  while(cin >> n) {
    int x;
    int sum = 0;

    while(cin >> x && n > 0) {
      sum += x;
      --n;
    }
    
    cout << sum << endl;
  }
}
