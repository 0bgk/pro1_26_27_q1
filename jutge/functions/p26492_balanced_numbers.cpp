#include <iostream>
using namespace std;
// pre: n is a nautural number
// post: returns 1 iff n is balanced 
bool is_balanced(int n) {
  int even, odd;  
  even = odd = 0;
  int c = n;
  int p = 1;
  while(c > 0) {
    int rest = c % 10;
    if (p % 2 == 0) even += rest;
    else odd += rest;   
    c /= 10;
    ++p;
  }
  return even == odd; 
}
int main() {
  int n;
  cin >> n;
  cout << is_balanced(n) << endl;
}
