#include <iostream>
using namespace std;
int main() {
  int n, before, mid, after;
  cin >> n;
  bool greatest_peak = false;
  before = mid = after = 0;
  while(n != 0 && !greatest_peak) {
    before = mid; 
    mid = after;
    after = n;
    greatest_peak = before && mid > 3143 && mid > before && mid > after;
    cin >> n;
  }
  if (greatest_peak) cout << "YES" << endl;
  else cout << "NO" << endl;
}
