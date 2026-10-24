#include <iostream>
#include <string>
using namespace std;
int main() {
  string first_word, before_word, current_word;
  cin >> first_word;
  before_word = first_word;
  int max_word_count = 1;
  int word_count = 1;
  while(cin >> current_word) {
    if(before_word == current_word && current_word == first_word) ++word_count;
    else word_count = 1;
    if(word_count > max_word_count) max_word_count = word_count;
    before_word = current_word;
  }
  cout << max_word_count << endl;
}
