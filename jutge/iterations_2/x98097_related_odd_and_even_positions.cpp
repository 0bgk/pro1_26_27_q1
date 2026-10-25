#include <iostream>
using namespace std;
// pre: a >= 0 and b >= 0
// post: returns true iff a is multiple of b
bool is_multiple(int a, int b) {
  return b != 0 && a % b == 0;
}
int main() {
  int n, odd, even;
  cin >> n;
  odd = even = 0;
  int i = 1;
  while(n > 0) {
    int r = n % 10;
    if(i % 2 == 0) even += r;
    else odd += r;
    n /= 10;
    ++i;
  }
  cout << odd << " " << even << endl;
  if(is_multiple(odd, even)) { 
    cout << odd << " = " << odd / even << " * " << even << endl;
  } else if(is_multiple(even, odd)) {
    cout << even << " = " << even / odd << " * " << odd << endl;
  } else {
    cout << "nothing" << endl;
  }
}
