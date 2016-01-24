#include <iostream>
#include <limits>
#include <stdio.h>
#include <string>
#include <cstdlib>

using namespace std;

int largestOfThree(float a, int b, char c) {

int max = 0;

	if(a > b and a > c) {
		return max;
	}
	
	if(b > a and b > c) {
		return max + 1;
	}
	
	if(c > a and c > b) {
		return max + 2;
	}
	
	if(a >= b or a >= c) {
		return max;
	}
	
	if(b >= c or b >= a) {
		return max + 1;
	}
}

int isString(char *s, int maxSize) {

std:: string z (s);
int size = z.length();

if (size <= maxSize) {
	return (size);
}

else {
	return -1;
}
}

void interleave(int a[], int alen, int b[], int blen, int result[], int maxresultlen) {

int c = 0;
int d = 0;
	
	for(int i = 0; i < maxresultlen; i++) {
		if(i%2 == 0 && c < alen) {
			result[i] = a[c];
			c++;
		}
		
		else if(i%2 == 1 && d < blen) {
			result[i] = b[d];
			d++;
		}
		
		else if(c < alen) {
			result[i] = a[c];
			c++;
		}
		
		else {
			result[i] = b[d];
			d++;
		}
	}
}
