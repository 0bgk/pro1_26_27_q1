#include <iostream>
using namespace std;
int main() {
  int row, col;
  cin >> row >> col;
  int coins = 0;
  for (int i = 0; i < row; ++i) {
    for (int j = 0; j < col; ++j) {
      char coin;
      cin >> coin;
      coins += coin - '0';
    }
  }
  cout << coins << endl;
}
