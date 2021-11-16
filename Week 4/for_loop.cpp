/*
structure:
for (initial statement; loop condition; update statement)
{
statement
}
*/

//Program to determine the sum of the first n positive numbers.
#include <iostream> //Line 1
using namespace std; //Line 2
int main() //Line 3
{ //Line 4
	int counter; //loop control variable Line 5
	int sum; //variable to store the sum of numbers Line 6
	int N; //variable to store the number of
	//first positive integers to be added Line 7
	
	cout << "Line 8: Enter the number of positive "
		 << "integers to be added: "; //Line 8
	cin >> N; //Line 9
	
	sum = 0; //Line 10
	cout << endl; //Line 11
	
	for (counter = 1; counter <= N; counter++) //Line 12
	sum = sum + counter; //Line 13
		cout << "Line 14: The sum of the first " << N
			 << " positive integers is " << sum
			 << endl; //Line 14
	return 0; //Line 15
}


