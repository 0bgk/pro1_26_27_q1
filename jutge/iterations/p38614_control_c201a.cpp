#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int ncopy = n;
  int pos = 1;
  int odd_pos = 0;
  while(ncopy > 0) {
    int rest = ncopy % 10;
    if (pos % 2 == 1) odd_pos += rest;   
    ncopy /= 10;
    ++pos; 
  }
  if (odd_pos % 2 == 0) cout << n << " IS COOL" << endl;
  else cout << n << " IS NOT COOL" << endl;
}
