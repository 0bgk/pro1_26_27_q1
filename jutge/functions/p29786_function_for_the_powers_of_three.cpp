#include <iostream>
using namespace std;
// pre: n is nautral
// post: returns true iff n is power of three
bool es_potencia_de_3(int n) {
  while(n != 0 && n % 3 == 0) n /= 3;
  return n == 1;
}
int main() {
  int n;
  while(cin >> n) cout << es_potencia_de_3(n) << endl;
}
