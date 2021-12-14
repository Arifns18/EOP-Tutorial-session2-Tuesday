/*
1-D Array

1.
dataType arrayName [arraySize];
i.e: int amounts [5];

2.
initialize array elements
dataType arrayName [arraySize] = {value1, value2, value3,...};
i.e: int amounts [5] = {1,2,3}
*/


#include <iostream>

using namespace std;

//arraySize is recommended to be declared as constant
const int NUMELS = 5;

int main(){

	//Declare array and initialize its elements
	int amounts[NUMELS] = {4,1,2,3,5};

	//Accessing array elements
	//Array index start from 0.
	//Simple formula: accessible array elements = arraySize - 1.
	
	cout << amounts[4]; // Return value: 5
	cout << endl;
	cout << amounts[0]; // Return value: 4
	cout << endl;
	
	int i =3;
	cout << amounts[i]; // amounts[3]: Return value: 3
	cout << endl;
	cout << amounts[2*i-4]; // amounts[2]: Return value: 2
	cout << endl;

	return 0;
}


