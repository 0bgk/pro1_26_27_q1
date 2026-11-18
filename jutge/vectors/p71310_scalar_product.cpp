#include <iostream>
#include <vector>
using namespace std;
// pre:  vectors u and v with same size
// post: returns scalar product of u and v
double scalar_product(const vector<double>& u, const vector<double>& v) {
  double scalar_product_num = 0;
  for (int i = 0; i < u.size(); ++i) scalar_product_num += u[i] * v[i];
  return scalar_product_num;
}
int main() {
  double x, y;
  cin >> x >> y;
  vector<double> u = {x,y};
  vector<double> v = {x,y};
  cout << scalar_product(u, v) << endl;
}
