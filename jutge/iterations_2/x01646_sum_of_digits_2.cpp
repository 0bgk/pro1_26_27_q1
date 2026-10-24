#include <iostream>
using namespace std;
int main() {
  int b, n;
  cin >> b;
  while(cin >> n) {
    int sum = 0;
    int number_copy = n;
    while(n > 0) {
      int rest = n % b;
      sum += rest;
      n /= b;
    }
    cout << number_copy << ": " << sum << endl;
  }

}
