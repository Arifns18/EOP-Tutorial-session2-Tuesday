//This program reads a course score and prints the
//associated course grade.
#include <iostream> //Line 1

using namespace std; //Line 2

void getScore(int& score); //Line 3
void printGrade(int score); //Line 4

int main () //Line 5
{ //Line 6
	int courseScore; //Line 7
	
	cout << "Line 8: Based on the course score, \n"
		 << " this program computes the "
		 << "course grade." << endl; //Line 8
	
	getScore(courseScore); //Line 9
	
	printGrade(courseScore); //Line 10
	
	return 0; //Line 11
} //Line 12

void getScore(int& score) //Line 13
{ //Line 14
	cout << "Line 15: Enter course score: "; //Line 15
	cin >> score; //Line 16
	cout << endl << "Line 17: The course score is "
		 << score << endl; //Line 17
} //Line 18
void printGrade(int cScore) //Line 19
{ //Line 20
	cout << "Line 21: The course grade is: "; //Line 21

	if (cScore >= 90) //Line 22
	cout << "A." << endl; //Line 23
	else if (cScore >= 80) //Line 24
	cout << "B." << endl; //Line 25
	else if(cScore >= 70) //Line 26
	cout << "C." << endl; //Line 27
	else if (cScore >= 60) //Line 28
	cout << "D." << endl; //Line 29
	else //Line 30
	cout << "F." << endl; //Line 31
} //Line 32
