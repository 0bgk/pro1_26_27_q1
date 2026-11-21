#include <iostream>
using namespace std;
// pre: 0 < n1 and n2 < 109
// post: return max number of n1 and n2
int max(int n1, int n2) {
  if (n1 > n2) return n1;
  return n2;
}
// pre: 0 < x < 109
// post: return the result of fattening x
int fatten(int x) {
  if(x <= 9) return x;
  int fattened_prefix = fatten(x/10);
  int max_num = max(fattened_prefix % 10, x%10);
  return fattened_prefix * 10 + max_num;
}
int main() {
  int x;
  cin >> x;
  cout << fatten(x) << endl;
}
