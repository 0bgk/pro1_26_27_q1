#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  for (int bread = 1; bread <= 9; ++bread) {
    for(int filling = 0; filling <= 9; ++filling) {
      if(filling != bread){
        cout << bread;
        for(int filling_rep = n - 2; filling_rep > 0; --filling_rep) cout << filling;
        cout << bread << endl; 
      }
    }
  }
}
