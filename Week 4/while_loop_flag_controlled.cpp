/*
Structure: 

isFound = false; //initialize the loop control variable
while (!isFound) //test the loop control variable
{
.
.
.
if (expression)
isFound = true; //update the loop control variable
.
.
.
}
*/

//Flag-controlled while loop.
//Number guessing game.
#include <iostream> //Line 1
#include <cstdlib> //Line 2
#include <ctime> //Line 3

using namespace std;
int main() //Line 5
{ //Line 6
	//declare the variables Line 7
	int num; //variable to store the random
	//number Line 8
	int guess; //variable to store the number
	//guessed by the user Line 9
	bool isGuessed; //boolean variable to control
	//the loop Line 10
	srand(time(0)); //Line 11
	num = rand() % 100; //Line 12
	isGuessed = false; //Line 13
	
	
	while (!isGuessed) //Line 14
	{ //Line 15
	cout << "Enter an integer greater"
		 << " than or equal to 0 and "
		 << "less than 100: "; //Line 16
	
	//cout << endl << "Generated num: "<< num << endl;
	cin >> guess; //Line 17
	cout << endl; //Line 18
	
	if (guess == num) //Line 19
	{ //Line 20
		cout << "You guessed the correct "
			 << "number." << endl; //Line 21
		isGuessed = true; //Line 22
	} //Line 23
	else if (guess < num) //Line 24
		cout << "Your guess is lower than the "
			 << "number.\n Guess again!"
			 << endl; //Line 25
	else //Line 26
		cout << "Your guess is higher than "
			 << "the number.\n Guess again!"
			 << endl; //Line 27
	} //end while //Line 28
	return 0; //Line 29
}
