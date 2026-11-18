#include <iostream>
using namespace std;
// pre: x is a natural number
// post: returns the sum of the digits of x
int sum_of_digits(int x) {
  if (x == 0) return 0;
  return sum_of_digits(x/10) + x%10; 
}
// pre: x is a naural number
// post: returns the reduction of x digtis
int reduction_of_digits(int x) {
  if(x <= 9) return x;
  return reduction_of_digits(sum_of_digits(x));
}
int main() {
  int x;
  cin >> x;
  cout << reduction_of_digits(x) << endl;
}
