#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  cout << "The number of digits of " << n; 
 
  int d = 1;
  while (n > 9) {
    ++d; 
    n /= 10;
  }

  cout << " is " << d << "." << endl;
} 
