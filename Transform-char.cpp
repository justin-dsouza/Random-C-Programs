#include <iostream>

using namespace std;

int main() {

	char x;
	
	cin >> x;
	
	if (97 <= x and x <= 122) {
		x = x - 32;
		cout << x << endl;
	}
	else if (65 <= x and x <= 90) {
		x = x + 32;
		cout << x << endl; 
	}
	else {
		cout << x << endl;
	}
	
	return 0;
}


