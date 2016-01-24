#include <iostream>

using namespace std;

int main (){

int numone;
int numtwo;

cin >> numone;
cin >> numtwo;

if  (numone >= numtwo){
	bool down = true;
	
	while (down){
		numone = numtwo;
		cin >> numtwo;
		
		if (numtwo == 0)
			break;
		
		if (numtwo > numone)
			down= false;
	}
	
	if (down)
		cout << "Sorted non-increasing" << endl;
	
	else 
		cout << "Not sorted" << endl;
	
}

else if (numone < numtwo){
		bool up = true;
		
	while (up){
		numone = numtwo;
		cin >> numtwo;
			
		if (numtwo == 0)
				break;
			
		if (numtwo < numone)
				up = false;
	}
		
		if (up)
			cout << "Sorted non-decreasing" << endl;
		
		else 
			cout << "Not sorted" << endl;

}

return 0;
}