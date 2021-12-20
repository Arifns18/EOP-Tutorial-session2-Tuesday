/*
Pointer = Variable to store address:
Example: numAddr = &num;

Indirection Operator: "*" followed by pointers
1. "The variable whose address is stored in”
2. “The variable pointed to by variable”
*numAddr = &num;

*/
#include <iostream>

using namespace std;

int main(){

	//Store address in variable
	int num = 10, distance = 27;
	int *numAddress= &num; 
	
//	int *numAddress;
//	numAddress= &num;
	
	/*
	Using an address
	1. Address is retrieved
	2. Address is used to retrieve actual data
	*/
	
	// Retrieve address stored in variable numAddress
	cout << numAddress;
	cout << endl;
	
	// Retrieve value from num using address stored in numAddress
	cout << *numAddress;
	cout << endl;
	
	//Assign new address to the pointer numAddress
	numAddress = &distance;
	
	cout << numAddress;
	cout << endl;
	
	cout << *numAddress;
	
	
	return 0;
}


