#include <iostream>
using namespace std;
// pre: n is natural number
// post: returns number of digits of n
int number_of_digits(int n) {
  if (n <= 9) return 1;
  return number_of_digits(n / 10) + 1;
}
int main() {
  int n;
  while (cin >> n) cout << number_of_digits(n) << endl;
}
