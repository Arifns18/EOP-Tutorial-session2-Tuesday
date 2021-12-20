/*
Variable : 
1. Value stored
2. Number of byte reserved
3. Where in memory these bytes are located

Address:
1. Using "&"
2. "Address of"
Example: &num translates to address of num
*/

#include <iostream>

using namespace std;

int main(){

	int num;
	
	num = 22;
	
	cout << "Num value: " << num << endl;
	
	//Address of variable num
	cout << "Num address: " << &num << endl;

	return 0;
}


