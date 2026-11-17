#include <iostream>
#include <vector>
using namespace std;
// pre: numbers_sum is the sum of all the elements of numbers and numbers are integer vector
// post: returns true iff it has a number equal to the sum of the rest
bool has_equal_sum_rest(int numbers_sum, const vector<int> &numbers) {
  bool has_equal = false;
  int i = 0;
  while (!has_equal && i < numbers.size()) {
    int number = numbers[i];
    if (numbers_sum - number == number) has_equal = true;
    ++i;
  }
  return has_equal;
}
int main() {
  int size;
  while (cin >> size) {
    vector<int> numbers(size);
    int numbers_sum = 0;
    for (int i = 0; i < size; ++i) {
      cin >> numbers[i];
      numbers_sum += numbers[i];
    }
    if (has_equal_sum_rest(numbers_sum, numbers)) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}
