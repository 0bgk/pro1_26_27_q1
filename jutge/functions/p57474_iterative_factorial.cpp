#include <iostream>
using namespace std;
// pre: n is a natural number and 0 ≤ n ≤ 12
// post: returns n! (factorial of n)
int factorial(int n) {
  int fac = 1;
  for (int i = 1; i <= n; ++i) fac *= i; 
  return fac;
}
int main() {
  int n;
  while (cin >> n) cout << factorial(n) << endl; 
}
