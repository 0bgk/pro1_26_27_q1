#include <iostream>
using namespace std;
// pre: --- 
// post: returns the max of a and b 
int max2(int a, int b) {
  if(a >= b) return a;
  return b;
}
int main() {
  int a, b;
  cin >> a >> b;
  cout << max2(a, b) << endl;
}
