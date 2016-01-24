#include <math.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	
unsigned int y;

cin >> y;

int answer;

// answer = log10(y)/log10(2.0) + 1;
y = y + 1;
answer = ceil(log10(y)/log10(2.0));

cout << log10(y) << endl;
cout << log10(2.0) << endl;
cout << log10(y)/log10(2.0) << endl;
cout << (int) (log10(y)/log10(2.0)) << endl;

cout << y-1 << " can be represented using " << answer << " bits. " << endl;

return 0;

	
		
}