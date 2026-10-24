#include <iostream>
using namespace std;
int main() {
	char parenthese;
	int open = 0;
	while(open > -1 && cin >> parenthese) {
		if(parenthese == '(') ++open;
		else --open;
	}
	if(open == 0) cout << "yes" << endl;
	else cout << "no" << endl;
}
