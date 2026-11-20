#include <iostream>
using namespace std;
int main() {
  int row, col;
  cin >> row >> col;
  int coins = 0;
  for (int i = 0; i < row; ++i) {
    char coin; 
    for (int j = 0; j < col; ++j) {
      cin >> coin;
      coins += coin - '0';
    }
  }
  cout << coins << endl;
}
