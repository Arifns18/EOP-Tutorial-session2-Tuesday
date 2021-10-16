//Example
//test

/* 
Type
1st class of eop
*/

/*
	Data type:
	1. int: integer
	2. float: decimal, single precision
	3. double: decimal, double precision
	4. char: character
	5. string: array of character
	6. bool: true/false
	
	Variable declaration
	e.g: 
	int a, b;
	int a = 10;
	const int 10;
	
	** Constant (const), is used to ensure a variable values
	does not change throughout the program. A constant variable.
*/

#include <iostream>

using namespace std;

int main(){

	//const int a = 4;
	int a = 4;
	int z=1, x , c;
	int character= 'A';
	float t = 4.34;
	double y= 4.34;
	char i = 'a';
	string name = "Arif";
	bool statement = true;
	bool lies = false;
	
	cout << "Insert a number \n";
//	Prompt input from user
	cin >> a;
//	Display output with variable	
	cout << "Number inserted: " << a;
	
//	cout << "float : " << t;
//	cout << "\ndouble: " << y;

//	cout << "Char: " << i;
//	cout << "\nString: " << name;
	
//	cout << "Statement: " << statement;
//	cout << "\nLies: " << lies;
	
//	z = 10;
//	x = 2;
//	c = 3;
//	cout << z <<"\n";
//	cout << x <<"\n";
//	cout << c;

//	cout << character;

	return 0;
}
