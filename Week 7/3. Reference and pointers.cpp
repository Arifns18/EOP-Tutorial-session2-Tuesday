/*
Reference: named constant for an address
Address named as a reference can’t be altered 
after the address has been assigned 

Automatic dereference: an indirect access of a variable’s value 
without using the indirection operator symbol (*) 

Using "&"
*/

#include <iostream>

using namespace std;

int main(){
	
	//Automatic dereference
	int b;      // b is an integer variable
	int &a = b; // a is a reference variable that stores b's address
	
	//Assgign new values to a reference variable
	a = 10;     // this changes b's value to 10

	cout << b << endl;
	
	//Using pointers 
	int d; 	// d is an integer variable
	int *c = &d;	// c is a pointer store d's address in c
	
	//Assgign new values to a pointer
	*c = 27; 	// this changes d's value to 10
	
	//Pointer can be used to point to different variable address
	//Automatic dereference will only change the value of the intially referenced variable address
	int x = 5;
	c = &x;
	cout << d << endl;
	cout << *c;



	return 0;
}


