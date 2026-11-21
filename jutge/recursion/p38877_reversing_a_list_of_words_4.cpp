#include <iostream>
using namespace std;
// pre: n >= 0 and at least n words remain in the input
// post: prints the last n words of the input in reverse order,
//       one per line; at the end, n is 0
void reverse_sequence_words(int &n) {
  string word;
  if (cin >> word) {
    reverse_sequence_words(n);
    if (n > 0) {
      --n;
      cout << word << endl;
    }
  }
}
int main() {
  int n;
  cin >> n;
  reverse_sequence_words(n);
}
