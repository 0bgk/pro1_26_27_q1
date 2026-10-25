#include <iostream>
using namespace std;
// pre: a and b are not negative and at least one of them is strictly greater than zero 
// post: returns gcd of a and b
int gcd(int a, int b) {
  while(b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}
// pre: a >= 1 and b >= 1
// post: returns lcm of a and b
int lcm(int a, int b) {
 return a / gcd(a, b) * b; 
}
int main() {
  int n;
  while(cin >> n && n != 0) {
    int a;
    cin >> a;
    for(int i = 1; i < n; ++i) {
      int b;
      cin >> b;
      a = lcm(a, b);
    }
    cout << a << endl;
  }
}
