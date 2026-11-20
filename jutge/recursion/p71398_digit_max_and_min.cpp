#include <iostream>
using namespace std;
// pre: n is a natural number
// post: maxim is the biggest digit of n and minim is the smallest digit of n
void digit_maxim_i_minim(int n, int& maxim, int& minim) {
  int digit = n % 10;
  if (n > 9) digit_maxim_i_minim(n/10, maxim, minim);
  else minim = maxim = digit;
  if (digit < minim) minim = digit;
  if(digit > maxim) maxim = digit;
}
int main() {
  int n = 1703;
  int maxim = 0;
  int minim = 0;
  digit_maxim_i_minim(n, maxim, minim);
  cout << "min: " << minim << " max: " << maxim << endl;
}
