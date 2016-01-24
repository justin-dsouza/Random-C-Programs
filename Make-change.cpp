#include <iostream>

using namespace std;

int main(){
	
int toonies = 0, loonies = 0, twenty_five = 0, ten = 0, five = 0, one = 0; 	
int given_toonies, given_loonies, given_twentyfive, given_ten, given_five, given_one;
float initial_number; 			
int new_initial;
	
cin >> given_toonies;				
cin >> given_loonies;
cin >> given_twentyfive;
cin >> given_ten;
cin >> given_five;
cin >> given_one;
cin >> initial_number;

new_initial = initial_number*100;


while ((toonies*200) <= (new_initial - 200) and toonies < given_toonies) {
	toonies = toonies + 1;
}
new_initial = new_initial - (toonies * 200);

while ((loonies*100) <= (new_initial - 100) and loonies < given_loonies) {
	loonies = loonies + 1;
}
new_initial = new_initial - (loonies * 100);

while ((twenty_five*25) <= (new_initial - 25) and twenty_five < given_twentyfive) {
	twenty_five = twenty_five + 1;
}
new_initial = new_initial - (twenty_five * 25);

while ((ten*10) <= (new_initial - 10) and ten < given_ten) {
	ten = ten + 1;
}
new_initial = new_initial - (ten * 10);

while ((five*5) <= (new_initial - 5) and five < given_five) {
	five = five + 1;
}
new_initial = new_initial - (five * 5);

while ((one*1) < (new_initial) and one < given_one) {
	one = one + 1;
}
new_initial = new_initial - (one * 1);

if (new_initial!= 0) {
	cout << "Error: cannot make change" << endl;
}
else {
	cout << toonies << " x $2, " << loonies << " x $1, " << twenty_five << " x 25c, " << ten << " x 10c, " << five << " x 5c, " << one << " x 1c" << endl;
}
return 0;
	
}
		
