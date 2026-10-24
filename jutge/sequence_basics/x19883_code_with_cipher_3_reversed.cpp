#include <iostream>
using namespace std;
// pre: -3 < n < 3 
// post: returns '-' iff n = 0, '+' iff n = 1 or n = -1, '*' iff n = 2 or n = -2 
char cipher3(int n) {
  if (n == 0) return'-';
  else if (n == 1 || n == -1) return '+';
  return '*';
}
int main() {
  int n;
  while(cin >> n) {
    if (n != 0) {
      if (n < 0) cout << ':'; 
      while(n != 0) {
        int rest = n % 3;
        cout << cipher3(rest);       
        n /= 3;
      } 
    } else {
      cout << cipher3(n);
    }
    cout << endl;
  }
}
