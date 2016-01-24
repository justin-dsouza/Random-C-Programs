#include <iostream>
#include <string.h>

using namespace std;

int main(){
	
int x;
int n = 7;
char final_binary [8];
	
cin >> x;

	
while (n >= 0) {
	if (x%2 > 0) {
		final_binary[n] = 1;
	}	
	else {
		final_binary[n] = 0;
	}
		
	x = x/2;
	n = n-1;
				}
	
	if (final_binary[1] xor final_binary[2] xor final_binary[3] xor final_binary[4] xor final_binary[5] xor final_binary [6] xor final_binary [7] == final_binary[0]){
		cout << "Valid" << endl;
	}
		
	else {
		cout << "Invalid" << endl;
	}
	
return 0;
}