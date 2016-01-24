#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <string>

using namespace std;

int main (int argc, char* argv[]){

if (argc != 3){
	cerr << "Error: input" << endl;
	return -1;
}

string firstNumStr = argv[1];
string secondNumStr = argv[2];

int maxlength, minlength;

if (firstNumStr.length() > secondNumStr.length()){
	maxlength = firstNumStr.length();
	minlength = secondNumStr.length();
}

else {
	maxlength = secondNumStr.length();
	minlength = firstNumStr.length();
}

char num1[maxlength];
char num2[minlength];

for (int i=0; i<maxlength; i++){
	if (firstNumStr.length() > secondNumStr.length()){
		num1[i] = firstNumStr[maxlength-i-1];
		if (i < minlength){
			num2[i] = secondNumStr[minlength-i-1];
		}
	}
	
	else {
		num1[i] = secondNumStr[maxlength-i-1];
		if (i < minlength){
			num2[i] = firstNumStr[minlength-i-1];
		}
	}
}

for (int i=0; i<maxlength; i++){
	if ((num1[i] - '0') < 0 or (num1[i] - '0') > 9){
		cerr << "Error: input" << endl;
		return -1;
	}
	
	if (i < minlength){
		if((num2[i] - '0') < 0 or (num2[i] - '0') > 9){
			cerr << "Error: input" << endl;
		return -1;
		}
	}
}

int trigger = 0;
int sum[maxlength];

for (int i=0; i<maxlength; i++){
	if (i < minlength){
		sum[i] = ((num1[i] - '0') + (num2[i] - '0') + trigger) % 10;
		
		if ((num1[i] -'0') + (num2[i] - '0') + trigger>= 10){
			trigger = 1;
		}
		
		else {
			trigger = 0;
		}
	}
	else {
		sum[i] = ((num1[i] - '0') + trigger) % 10;
		
		if ((num1[i] - '0') + trigger>= 10){
			trigger = 1;
		}
		
		else {
			trigger = 0;
		}
	}
}

if (trigger == 1){
	cout << 1;
}

for (int i=0; i<maxlength; i++){
	cout << sum[maxlength-i-1];
}
	
return 0;
}