#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int white_square_coins = 0;
  int black_square_coins = 0;
  for (int row = 0; row < n; ++row) {
    bool even_row = row % 2 == 0;
    for (int col = 0; col < n; ++col) {
      char coin;
      cin >> coin;
      bool even_col = col % 2 == 0;
      if (even_row == even_col) white_square_coins += coin - '0';
      else black_square_coins += coin - '0';
    }
  }
  cout << white_square_coins << '-' << black_square_coins << " = " <<  white_square_coins - black_square_coins << endl;
}
