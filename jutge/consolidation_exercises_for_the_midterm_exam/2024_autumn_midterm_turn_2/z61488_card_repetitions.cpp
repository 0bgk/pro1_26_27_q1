#include <iostream>
using namespace std;
 /**
 * @pre card = {A, 2, 3, ..., 9, 0, J, Q, K}, rep >= 1
 * @post imprimeix la carta amb el tipus de repeticio 
 *  i si rep > 4 imprimeix repeticio i la carta
 */
void print_poker_seq(char card, int rep) {
  if (rep == 2) cout << "Pair of " << card << "s" << endl;
  else if (rep == 3) cout << "Trio of " << card << "s" << endl;
  else if (rep == 4) cout << "Poker of " << card << "s" << endl;
  else if (rep > 4) cout << rep << " " << card << "s!" << endl; 
}
int main() {
  char card1;
  cin >> card1;
  int card_count = 1;
  while(card1 != '.') {
    char card2;
    cin >> card2;
    if (card1 == card2) ++card_count;      
    else {
      print_poker_seq(card1, card_count);
      card_count = 1; 
    }
    card1 = card2;
  }

}
