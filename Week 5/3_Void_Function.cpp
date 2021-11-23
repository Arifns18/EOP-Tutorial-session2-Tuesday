/*
	User defined function: Void Functions
	
	1. No datatype as no value is returned from the function
	2. Place before function "main": does not need function prototype.
	3. Place after function "main": need function prototype before function "main".
*/

//Program: Print a triangle of stars
#include <iostream>

using namespace std;

void printStars(int blanks, int starsInLine);
int main()
{
	int noOfLines; //var to store the number of lines
	int counter; //for loop control variable
	int noOfBlanks; //var to store the number of blanks
	
	cout << "Enter the number of star lines (1 to 20) "
		 << "to be printed: ";
	cin >> noOfLines; 
	
	while (noOfLines < 0 || noOfLines > 20)
	{
		cout << "Enter the number of star lines "
			 << "(1 to 20) to be printed: ";
		cin >> noOfLines;
	}
	
	cout << endl << endl;
	noOfBlanks = 30;
	
	for (counter = 1; counter <= noOfLines; counter++)
	{
		printStars(noOfBlanks, counter);
		noOfBlanks--;
	}
	return 0;
}

void printStars(int blanks, int starsInLine)
{
	int count;
	for (count = 1; count <= blanks; count++)
		cout << ' ';
	for (count = 1; count <= starsInLine; count++)
		cout << " *";
	cout << endl;
}
