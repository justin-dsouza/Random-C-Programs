#include <iostream>
#include <string> 
using namespace std;

int main (){

string binary_number;
string num;

cin >> binary_number;

if (binary_number.length() % 3 == 1) {
	num = "00" + binary_number;
	}
else if (binary_number.length() % 3 == 2) {
	num = "0" + binary_number;
	}
else {
	num = binary_number;
	}
	
int a = num [0];
int length = num.length ();

if (a == 48) {
	 a = 0;
	}
else {
	a = 1;
	}

for (int x = 3; x < length; x = x + 3) {
	binary_number = num [x];

	if (binary_number.compare("0")) {
		a = a + 1;
	}
	if (a % 2 == 1){
		a = 1;
	}	
	else {
		a = 0;
	}
}
int b = num [1];

if (b == 48) {
	b = 0;
	}
else {
	b = 1;
	}

for (int x = 4; x < length; x = x + 3) {
	binary_number = num [x];
	
	if (binary_number.compare("0")) {
		b = b + 1;
	}
	if (b % 2 == 1){
		b = 1;
	}
	else {
		b = 0;
	}
}
int c = num [2];

if (c == 48) {
	c = 0;
	}
else {
	c = 1;
	}

for (int x = 5; x < length; x = x + 3) {
	binary_number = num [x];
	
	if (binary_number.compare("0")) {
		c = c + 1;
	}
	if (c % 2 == 1){
		c = 1;
	}
	else {
		c = 0;
	}
}

cout << a << b << c << endl;

return 0;
}