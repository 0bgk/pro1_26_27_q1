#include <iostream>
using namespace std;
int main() {
  int row, col;
  cin >> row >> col;
  int coins = 0;
  for (int i = 0; i < row; ++i) {
    bool even_row = i % 2 == 0; 
    char coin;
    for (int j = 0; j < col; ++j) {
      cin >> coin;
      bool even_col = j % 2 == 0;
      if ((even_col && even_row) || (!even_col && !even_row)) coins += coin - '0';
    }
  }
  cout << coins << endl;
}
