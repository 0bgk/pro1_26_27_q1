#include <iostream>
using namespace std;
// pre: 0 <= n <= 12
// post: returns n! (factorial)
int factorial(int n) {
  if (n == 0) return 1;
  return n * factorial(n - 1); 
}
int main() {
  int n;
  while(cin >> n) cout << factorial(n) << endl;
}
