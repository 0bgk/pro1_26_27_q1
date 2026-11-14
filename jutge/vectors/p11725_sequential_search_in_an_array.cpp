#include <iostream>
#include <vector>
using namespace std;
// pre: x is integer and v is integer vector
// post: returns true iff v includes x
bool exists(int x, const vector<int>& v) {
  bool num_founded = false;
  int i = 0;
  while (!num_founded && i < v.size()) {
    if (v[i] == x) num_founded = true;
    ++i;
  }
  return num_founded;
}
int main() {
  cout << exists(-1, {1,2,-1}) << endl;
}
