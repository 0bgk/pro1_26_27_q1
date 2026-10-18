#include <iostream>

using namespace std;

int main() {
  char ch;
  bool has_ch = false;

  while(cin >> ch && !has_ch)
    if(ch == 'a') has_ch = true;
  
  if(has_ch) cout << "yes" << endl;
  else cout << "no" << endl;
}
