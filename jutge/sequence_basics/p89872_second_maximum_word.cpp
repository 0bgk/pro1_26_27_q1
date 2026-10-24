#include <iostream>
using namespace std;
int main() {
  string current_word, largest_word, second_largest_word;
  cin >> largest_word;
  while(cin >> current_word) {
    if(current_word > largest_word) {
      second_largest_word = largest_word;
      largest_word = current_word;
    } else if (current_word != largest_word && current_word > second_largest_word){
      second_largest_word = current_word;
    }
  }
  cout << second_largest_word << endl;
}
