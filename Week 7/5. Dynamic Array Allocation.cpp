/*
Dynamic allocation: 
Storage allocated is determined and adjusted as program is run
- Useful when dealing with lists
- Allows list to expand and contract as list items are added and deleted

Heap: free storage area of a computer  
- Consists of unallocated memory
- Can be allocated to a running program


*/

#include <iostream>

using namespace std;

int main(){

//	Example 1
	int *num = new int;
	
//	Example 2. Same function with example 1	
//	int *num;
//	num = new int;

	int *grade = new int[200];
	//Statement reserves storage for 200 integers 
	//and places address of first integer into pointer grade
	
	//Variable dimension
	int numgrades;
	cout << "Enter the number of grades to be processed: ";
	cin >> numgrades;
	int *grades = new int[numgrades];
	//Size of array depends on user input





	return 0;
}


