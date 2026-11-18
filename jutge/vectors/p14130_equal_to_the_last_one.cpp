#include <iostream>
#include <vector>
using namespace std;
// pre: nums are sequence of naturals and its size
// post: returns number of elements that are equal to the last one,
// this one excluded
int count_equal_last_num(const vector<int> &nums) {
  int last_pos = nums.size() - 1;
  int counter = 0;
  for (int i = 0; i < last_pos; ++i) {
    if (nums[i] == nums[last_pos]) ++counter;
  }
  return counter;
}
int main() {
  int size;
  cin >> size;
  vector<int> nums(size);
  for (int i = 0; i < size; ++i) cin >> nums[i];
  cout << count_equal_last_num(nums) << endl;
}
