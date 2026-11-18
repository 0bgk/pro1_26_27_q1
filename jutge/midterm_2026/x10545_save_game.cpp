#include <iostream>
using namespace std;
// pre: n1 and n2 are natural numbers
// post: returns n1 + n2
int sum_two_num(int n1, int n2) {
  return n1 + n2;
}
// pre: p1 and p2 are natural numbers
// post: returns 1 when p1 > p2, returns 2 when p2 > p1 and returns 0 when no-winer 
int get_winer(int p1, int p2) {
  if (p1 > 7) p1 = 0;
  if (p2 > 7) p2 = 0;
  if (p1 > p2) return 1;
  else if (p2 > p1) return 2;
  return 0;
}
int main() {
  int num1_p1, num2_p1, num1_p2, num2_p2;
  cin >> num1_p1 >> num2_p1 >> num1_p2 >> num2_p2;
  int sum_p1 = sum_two_num(num1_p1, num2_p1);
  int sum_p2 = sum_two_num(num1_p2, num2_p2);
  cout << get_winer(sum_p1, sum_p2) << endl; 
}
