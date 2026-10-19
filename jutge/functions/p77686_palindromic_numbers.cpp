#include <iostream>
using namespace std;
// pre: n is natural number
// post: returns true iff n is palindromic
bool is_palindromic(int n) {
  int c = n;
  int r = 0;
  while(c > 0) {
   r *= 10;
   r += c % 10;
   c /= 10;
  }
  return r == n; 
}
int main() {
  int n;
  cin >> n;
  if (is_palindromic(n)) cout << "true" << endl;
  else cout << "false" << endl;
}
