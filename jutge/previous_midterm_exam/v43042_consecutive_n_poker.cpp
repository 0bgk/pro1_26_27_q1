#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  char before_card, current_card;
  cin >> before_card;
  int consecutive_cards = 1;
  bool has_consecutive_cards = n == consecutive_cards;
  while(!has_consecutive_cards && cin >> current_card) {
    if(before_card == current_card) ++consecutive_cards;
    else consecutive_cards = 1;
    has_consecutive_cards = n == consecutive_cards;
    before_card = current_card;
  }
  if(has_consecutive_cards) cout << n << "-Poker of " << before_card << '!' << endl;
  else cout << "No " << n << "-Poker" << endl;
}
