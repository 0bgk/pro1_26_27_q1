#include <iostream>
using namespace std;
// pre:  pos is the number of words already read, and n == pos
// post: n is the total number of words in the input;
//       prints, in reverse order and one per line, the words still
//       to be read whose position (starting at 0) is less than n/2
void reverse_sequence_words(int &n, int pos) {
  string word;
  if (cin >> word) {
    ++n;
    reverse_sequence_words(n, n);
    if (pos < n/2) cout << word << endl;
  }
}
int main() {
  int n = 0;
  reverse_sequence_words(n, 0);
}
