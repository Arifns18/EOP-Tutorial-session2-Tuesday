/*
Obtain different addresses by adding to and subtracting from pointers, 

*/

#include <iostream>

using namespace std;

int main(){
	int nums[100];
	int *nPt;

	nPt = &nums[0];
	//or
//	nPt = nums;
	
	cout << nPt <<endl;
	nPt +=4; 
	cout << nPt;
	
	//Use online Hexadecimal Calculator to calculate the address distance
	//Omit the "0x" before caluation. Hexadecimal conist only A-F, 0-9.
	//4 * 4bytes = 16 

	return 0;
}


