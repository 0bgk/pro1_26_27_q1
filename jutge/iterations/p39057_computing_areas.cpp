#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  cout.setf(ios::fixed);
  cout.precision(6);
  
  int quantity;
  cin >> quantity;
  
  for (int i = 0; i < quantity; ++i) {
    string shape;
    cin >> shape;
    
    if (shape == "rectangle") {
      double length, width;
      cin >> length >> width;
      cout << width * length << endl;
    } else if (shape == "circle") {
      double radius;
      cin >> radius;
      cout << M_PI * radius * radius << endl;
    } 
  }
}
