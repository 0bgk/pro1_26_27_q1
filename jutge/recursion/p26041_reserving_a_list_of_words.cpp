#include <iostream>
using namespace std;
// pre: ---
// post: prints sequence words in reverse order
void reverse_sequence_words() {
  string word;
  if (cin >> word) reverse_sequence_words();
}
int main() {
  reverse_sequence_words();
}
