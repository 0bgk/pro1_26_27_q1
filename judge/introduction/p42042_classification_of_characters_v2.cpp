#include <iostream>
#include <cctype>

int main() {
 char c;
 std::cin >> c;

 if(std::islower(c)) std::cout << "lowercase" << std::endl;
 else std::cout << "uppercase" << std::endl;

 char lc = std::tolower(c);

 if(lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u') std::cout << "vowel" << std::endl; 
 else std::cout << "consonant" << std::endl;

 return 0;
}
