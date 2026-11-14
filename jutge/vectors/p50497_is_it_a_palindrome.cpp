#include <iostream>
#include <string>
using namespace std;
// pre: s is a string
// post: returns true iff s is a palidrome
bool is_palindrome(const string& s) {
  int last_pos = s.size() - 1;
  int i = 0;
  bool is_palindrome_val = s[i] == s[last_pos];
  while (is_palindrome_val && i < s.size()) {
    if (s[i] != s[last_pos - i]) is_palindrome_val = false;
    ++i;
  }
  return is_palindrome_val;
}
int main() {
  cout << is_palindrome("ana") << endl;
}
