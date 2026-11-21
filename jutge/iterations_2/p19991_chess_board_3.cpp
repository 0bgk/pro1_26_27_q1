#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int coins = 0;
  for (int row = 0; row < n; ++row) {
    char coin;
    for (int col = 0; col < n; ++col) {
      cin >> coin;
      if (row == col || n - row - 1 == col) coins += coin - '0';
    }
  }
  cout << coins << endl;
}
