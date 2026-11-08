#include <iostream>
using namespace std;
/**
* @pre n >= 0
* @post returns true if n is bicolor, false otherwise
*/
bool is_bicolor(int n) {
  int changes = 0;
  int previous_digit = n % 10; 
  n /= 10;
  while(n > 0 && changes < 2) {
    int current_digit = n % 10;
    if (previous_digit != current_digit) ++changes;   
    previous_digit = current_digit;
    n /= 10;
  }
  return changes == 1;
}
int main() {
  int n;
  cin >> n;
  if(is_bicolor(n)) cout << "true" << endl;
  else cout << "false" << endl;
}
