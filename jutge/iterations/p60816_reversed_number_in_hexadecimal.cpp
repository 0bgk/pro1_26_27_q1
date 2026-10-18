#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  if (n == 0) {
    cout << n;
  } else {
    while (n > 0) {
      int rest = n % 16;
     
      if (rest > 9) {
        cout << char('A' +  rest - 10);
      } else {
        cout << rest;
      }
   
      n /= 16;
    }
  }

  cout << endl;
}
