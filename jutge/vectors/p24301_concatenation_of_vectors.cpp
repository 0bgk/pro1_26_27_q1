#include <iostream>
#include <vector>
using namespace std;
// pre: v1 and v2 are integer vectors
// post: returns integer vector with v1 and v2 vectors
vector<int> concatenation(const vector<int>& v1, const vector<int>& v2) {
  int v1_size = v1.size();
  int v2_size = v2.size();
  vector<int> v(v1_size + v2_size);
  for (int i = 0; i < v1_size; ++i) v[i] = v1[i];
  for (int i = 0; i < v2_size; ++i) v[v1_size + i] = v2[i];
  return v;
}
int main() {
   vector<int> v = concatenation({0,1,2}, {1,2});
   for(int i = 0; i < v.size(); ++i) cout << v[i] << endl;
}
