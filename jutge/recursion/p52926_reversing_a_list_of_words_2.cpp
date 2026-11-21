#include <iostream>
using namespace std;
// pre: the input contains the word "end"
// post: prints the words before the first "end", in reverse order and one per line
void reverse_sequence_words() {
  string word;
  cin >> word;
  if (word != "end") {
    reverse_sequence_words();
    cout << word << endl;
  }
}
int main() {
  reverse_sequence_words();
}
