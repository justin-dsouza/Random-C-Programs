#include <iostream>

using namespace std;

int main() {

int c25, c10, c5, c1, a;
int min25 = 0, min10 = 0, min5 = 0, min1 = 0;

cin >> c25 >> c10 >> c5 >> c1 >> a;

unsigned M[a+1][c25+1][c10+1][c5+1][c1+1];
unsigned combo[a+1][4];

for (int p=0; p<=a; p++){
	for (int q=0; q<=c25; q++){
		for (int r=0; r<=c10; r++){
			for (int s=0; s<=c5; s++){
				for (int t=0; t<=c1; t++){
					if (p==0){
						M[p][q][r][s][t] = 0;
						combo[0][0] = 0;
						combo[0][1] = 0;
						combo[0][2] = 0;
						combo[0][3] = 0;
					}
					else {
					if(q>0 and p>=25){
						min25 = M[p-25][q-1][r][s][t];
						}
					else{
						min25=a;
						}
					if (r>0 and p>=10){
						min10 = M[p-10][q][r-1][s][t];
						}
					else{
						min10=a;
						}
					if (s>0 and p>=5){
						min5 = M[p-5][q][r][s-1][t];
						}
					else{
						min5=a;
						}
					if (t>0 and p>=1){
						min1 = M[p-1][q][r][s][t-1];
						}	
					else{
						min1=a;
						}
					
					if(p >= 25 && combo[p-25][0] < c25 && min25 <= min10) {
						M[p][q][r][s][t] = 1 + min25;
						combo[p][0] = 1 + combo[p-25][0];
						combo[p][1] = combo[p-25][1];
						combo[p][2] = combo[p-25][2];
						combo[p][3] = combo[p-25][3];
					}

					else if(p >= 10 && combo[p-10][1] < c10) {						
						M[p][q][r][s][t] = 1 + min10;
						combo[p][0] = combo[p-10][0];
						combo[p][1] = 1 + combo[p-10][1];
						combo[p][2] = combo[p-10][2];
						combo[p][3] = combo[p-10][3];
					}
					else if(p >= 5 && combo[p-5][2] < c5){
						M[p][q][r][s][t] = 1 + min5;
						combo[p][0] = combo[p-5][0];
						combo[p][1] = combo[p-5][1];
						combo[p][2] = 1 + combo[p-5][2];
						combo[p][3] = combo[p-5][3];
					}
					else if(p >= 1 && combo[p-1][3] < c1){
						M[p][q][r][s][t] = 1 + min1;
						combo[p][0] = combo[p-1][0];
						combo[p][1] = combo[p-1][1];
						combo[p][2] = combo[p-1][2];
						combo[p][3] = 1 + combo[p-1][3];
					}
					
					else{
						M[p][q][r][s][t] = a+1;
					}
					
					}
				
				}
			}
		}
	}
}
if (M[a][c25][c10][c5][c1] >= (a+1)){
	cerr << "Error: cannot make change" << endl;
}

else {
		cout << combo[a][0] << " ";
		cout << combo[a][1] << " ";
		cout << combo[a][2] << " ";
		cout << combo[a][3] << " ";
		cout << endl;
}
return 0;
}





