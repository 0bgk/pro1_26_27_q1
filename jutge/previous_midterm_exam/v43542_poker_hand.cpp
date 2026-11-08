#include <iostream>
#include <string>
using namespace std;
/**
* @pre c1, c2, c3 in {A, 2, 3, ..., 8, 9, 0, J, Q, K}
* @post Returns "Trio of Aces!", "Trio", "Pair", or 
*  All cards different" according to c1, c2, and c3.
*/
string poker_hand(char c1, char c2, char c3) {
  bool is_same_cards = c1 == c2 && c2 == c3; 
  if(c1 == 'A' && is_same_cards) return "Trio of Aces!";
  else if(is_same_cards) return "Trio";
  else if(c1 == c2 || c1 == c3 || c2 == c3) return "Pair";
  return "All cards different";
}
int main() {
  char c1, c2, c3;
  cin >> c1 >> c2 >> c3;
  cout << poker_hand(c1, c2, c3) << endl;
}
