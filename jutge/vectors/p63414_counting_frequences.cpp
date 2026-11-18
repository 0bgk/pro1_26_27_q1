#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, x;
  cin >> n;
  vector<int> v(1001, 0);
  for(int i = 0; i < n; ++i) {
    cin >> x;
    x -= 1000000000;
    ++v[x];
  }
  for(int i = 0; i < v.size(); ++i) {
    if (v[i] > 0) cout << i + 1000000000 << " : " << v[i] << "\n";
  }
}
