#include <iostream>

using namespace std;

int main(){

	int a, b;
	double z;
	char ch;
	
	cin >> ch; 
	//input: A
	//Value stored: ch = 'A'
	
	cin >> ch; 
	//input: AB
	//Value stored: ch = 'A', 'B' is held for later input
	
	cin >> a; 
	//input 48
	//Value stored: a = 48
	
	cin >> a; 
	//input 46.35
	//Value stored: a = 46, .35 held for later input
	
	cin >> z; 
	//input 74.35
	//Value stored: z = 74.35
	
	cin >> z; 
	//input 39
	//Value stored: z = 39.0
	
	cin >> z >> a; 
	//input 65.78 38
	//Value stored: z = 65.78, a = 38
		
	cin >> a >> b; 
	//input 4 60
	//Value stored: a = 4, b = 60
	
	cin >> a >> z; 
	//input 46 32.4 68
	//Value stored: a = 46, z = 32.4, 68 held for later input
	
	return 0;
}

