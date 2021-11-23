//Global variable

#include <iostream> //Line 1

using namespace std; //Line 2

int t; //global variable Line 3
void funOne(int& a); //Line 4

int main() //Line 5
{ //Line 6
	t = 15; //Line 7
	
	cout << "Line 8: In main: t = " << t << endl; //Line 8
	
	funOne(t); //Line 9
	
	cout << "Line 10: In main after funOne: "
		 << " t = " << t << endl; //Line 10
	return 0; //Line 11
} //Line 12
void funOne(int& a) //Line 13
{ //Line 14
	cout << "Line 15: In funOne: a = " << a
		 << " and t = " << t << endl; //Line 15
	
	a = a + 12; //Line 16
	
	cout << "Line 17: In funOne: a = " << a
		 << " and t = " << t << endl; //Line 17
	
	t = t + 13; //Line 18
	
	cout << "Line 19: In funOne: a = " << a
		 << " and t = " << t << endl; //Line 19
}
