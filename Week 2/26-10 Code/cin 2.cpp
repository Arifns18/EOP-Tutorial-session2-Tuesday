#include <iostream>

using namespace std;

int main(){
int a;
	double z;
	char ch;
//	The following statements show how the extraction operator >> works.
//	Statement Input Value Stored in Memory
	
	cin >> a >> ch >> z; 
	//Input: 57 A 26.9 
	//Value stored: a = 57, ch = 'A', z = 26.9
	
	cin >> a >> ch >> z; 
	//Input:57 A 26.9
	//Value stored:a = 57, ch = 'A', z = 26.9
	
	cin >> a >> ch >> z; 
	//Input: 57 A 26.9
	//Value stored: a = 57, ch = 'A', z = 26.9
	
	cin >> a >> ch >> z; 
	//Input: 57A26.9 
	//Value stored: a = 57, ch = 'A', z = 26.9
	return 0;
}

