#include <iostream>
using namespace std;
int main() {
  int n;
  int p = 1;
  while(cin >> n && n % 2 != 0) ++p;
  cout << p << endl;
}
