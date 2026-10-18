#include <iostream>
#include <string>

using namespace std;

int main() {
  string w;
  int o = 0;
  while(cin >> w) {
    if(w == "hello") ++o;
  }
  cout << o << endl;
}
