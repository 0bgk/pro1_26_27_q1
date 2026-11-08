#include <iostream>
using namespace std;

/**
 * @pre c {A, 2, 3, ..., 8, 9, 0, J, Q, K}
 * @post Retorna el nombre de la carta 
 */
int card_to_num(char c) {
  if(c == '0') return 10;
  else if(c == 'J') return 11;
  else if(c == 'Q') return 12;
  else if(c == 'K') return 13;
  else if(c == 'A') return 14;
  return c - '0';
}
/**
 * @pre c1, c2 en {A, 2, 3, ..., 8, 9, 0, J, Q, K}
 * @post Retorna cert si c1 té un valor més alt que c2
 */
bool better_card(char c1, char c2) {
  return card_to_num(c1) > card_to_num(c2);
}
int main() {
  char c1, c2;
  while (cin >> c1 >>c2) {
    if(better_card(c1, c2)) cout << "true" << endl;
    else cout << "false" << endl; 
  }
}
