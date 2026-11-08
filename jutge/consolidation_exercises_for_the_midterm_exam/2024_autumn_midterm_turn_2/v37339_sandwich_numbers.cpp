#include <iostream>
using namespace std;
/**
 * @pre  n >= 0
 * @post retorna cert si n és un número entrepà, fals en cas contrari
 */
bool is_sandwich(int n) {
  int b = 10;
  int close_bread_count = 1;
  int filling_changes = 0;
  int close_bread = n % b;
  n /= b;
  int prev_digit = close_bread;
  int curr_digit = 0;
  while (close_bread_count < 3 && filling_changes < 3 && n > 0) {
    curr_digit = n % b;
    if(close_bread == curr_digit) ++close_bread_count;
    if(prev_digit != curr_digit) ++filling_changes;
    prev_digit = curr_digit;
    n /= b;
  }
  return close_bread_count == 2 && filling_changes == 2 && close_bread == curr_digit;
}
int main() {
  int n;
  while (cin >> n) {
    if(is_sandwich(n)) cout << "true" << endl;
    else cout << "false" << endl;
  } 
}
