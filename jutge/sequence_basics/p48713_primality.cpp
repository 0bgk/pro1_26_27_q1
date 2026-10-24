#include <iostream>
using namespace std;
int main() {
  int seq_n, n;
  cin >> seq_n;
  for(int i = 0; i < seq_n; ++i) {
    cin >> n;
    int div = 2;
    bool is_prime = n > 1;
    while(is_prime && div * div <= n) {
      if(n % div == 0) is_prime = false;
      ++div;
    }
    if (is_prime) cout << n << " is prime" << endl;
    else cout << n << " is not prime" << endl;
  }
}
