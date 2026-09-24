#include <iostream>

int main() {
 char c;
 int lc;
 bool islc;

 std::cin >> c;
 islc = c >= 'a' && c <= 'z';

 if(islc) std::cout << "lowercase" << std::endl;
 else std::cout << "uppercase" << std::endl;

 lc = islc ? c : char('a' + (c - 'A'));

 if(lc=='a' || lc=='e' || lc=='i' || lc=='o' || lc=='u') std::cout << "vowel" << std::endl; 
 else std::cout << "consonant" << std::endl;

 return 0;
}
