#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main(int argc, char* argv[]){
	
int numberofnames = atoi(argv[1]);
string firstname[numberofnames], lastname[numberofnames];

if(argc != 2) { 
	cerr << "Error: input" << endl;
	return -1;
    }
	
for(int i=0; i < numberofnames; i++) {
	cin >>firstname[i]>> lastname[i];
	}

for (int x = 0; x < numberofnames; x++){ 
	for (int y = 0; y < numberofnames; y++){ 	
		if (lastname[x].compare(lastname[y]) < 0){ 
			firstname[y].swap(firstname[x]);
			lastname[y].swap(lastname[x]); 
			}
			
		else if (lastname[x].compare(lastname[y]) == 0){ 
			if (firstname[x].compare(firstname[y]) < 0){ 
				lastname[y].swap(lastname[x]); 
				firstname[y].swap(firstname[x]);
				}
			}
		}
	}

for (int z = 0; z < numberofnames; z++) {    
	cout <<firstname[z] << " " <<lastname[z]<< endl;
	}

    return 0;
}
