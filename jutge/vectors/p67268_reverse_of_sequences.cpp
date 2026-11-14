#include <iostream>
#include <vector>
using namespace std;
int main() {
  int size;
  while (cin >> size) {
    vector<int> nums(size);
    for (int i = 0; i < size; ++i) cin >> nums[i];
    for (int i = size - 1; i >= 0; --i) {
      cout << nums[i];
      if (i > 0) cout << ' ';
    }
    cout << endl;
  }
}
