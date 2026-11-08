#include <iostream>
using namespace std;
// pre: n is natural number
// post: returns true iff n is a power of three 
bool es_potencia_de_3(int n) {
  int pow3 = 1;
  while ( pow3 < n) {
    
  }  

}
// retorna verdadero si n es una potencia de 3. 3^0 =1 3^1=3 3^2=9 3^3 = 27
//cert per a 1, 3, 9, 27, 81, etcètera, i retornar fals per a 0, 2, 4, 5, 6, 7, 8, 10, etcètera.
int main() {
  int n;
  while (cin >> n) cout << es_potencia_de_3(n) << endl;
}

