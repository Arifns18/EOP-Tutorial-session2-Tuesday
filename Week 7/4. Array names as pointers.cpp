#include <iostream>

using namespace std;

int main(){

	int grade[3];
	
	// &grade[3] = &grade[0] + (3*4)
	// Integer is 4 bytes
	// (&grade[0], &grade[1], &grade[2]) = 3 array elements before &grade[3]

//	Offset: number of positions beyond first element in array
//	Store address of grade[0] in pointer gPtr
//	Use offset to find location of grade[3]
	
	grade[0]=4;
	grade[3]=10;
	int *gPtr;
	gPtr = &grade[0];
	
	cout << "Array element in grade[3]: " << *(gPtr+3);
	cout << endl;
	cout << "grade[3] address: " << gPtr+3;
	cout << endl;
	
	//If does not to include bracket ()
	cout << *gPtr + 3; // grade[0] + 3
	cout << endl;

	
	//If does not include asterisk *
	cout << gPtr + 3; // Address of grade[0] + 3;

	return 0;
}


