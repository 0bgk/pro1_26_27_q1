#include <iostream>
using namespace std;
// pre: n is a natural number 
// post: sum digits of n 
int sum_num_digits(int n) {
  if (n == 0) return 0;
  return sum_num_digits(n/10) + n%10;
}
// pre: n is natural number 
// post: returns true iff n is a prime number
bool is_prime(int n) {
  bool is_prime_res = n > 1;
  int div = 2;
  while (is_prime_res && div * div <= n) {
     if (n%div == 0) is_prime_res = false;
     ++div;
  }
  return is_prime_res;
}
// pre: n is a natural number
// post: returns true iff n is a perfect prime
bool is_perfect_prime(int n) {
  if (n <= 9) return is_prime(n);
  return is_perfect_prime(sum_num_digits(n)) && is_prime(n);
}
int main() {
  int n;
  cin >> n;
  cout << is_perfect_prime(n) << endl;
}
