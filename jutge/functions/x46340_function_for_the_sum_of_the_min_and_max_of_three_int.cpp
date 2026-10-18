#include <iostream>
using namespace std;
// pre: ---
// post: returns the min of x and y
int min2(int x, int y) {
  if(x <= y) return x;
  return y;
}
// pre: ---
// post: returns the max of x and y
int max2(int x, int y) {
  if(x >= y) return x;
  return y;
}
// pre: 0 < x, y, z < 10^9
// post: returns the sum of min and max of x, y, z
int sum_min_max(int x, int y, int z) {
  return min2(min2(x, y), z) + max2(max2(x, y), z);
}
int main() {
  int x, y, z;
  cin >> x >> y >> z;
  cout << sum_min_max(x, y, z) << endl;
}
