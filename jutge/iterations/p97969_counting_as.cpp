#include <iostream>
#include <string>

int main() {
 std::string s;
 getline(std::cin, s);

 int a = 0;
 for(int i = 0; i < s.length(); ++i) {
   if (s[i] == 'a') ++a;
   if(s[i] == '.') break;
 }

 std::cout << a << std::endl;

 return 0;
}
