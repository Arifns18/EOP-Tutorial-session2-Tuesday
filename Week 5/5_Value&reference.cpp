//Example 6-14: Reference and value parameters

#include <iostream> //Line 1

using namespace std; //Line 2

void funOne(int a, int& b, char v); //Line 3
void funTwo(int& x, int y, char& w); //Line 4

int main() //Line 5
{ //Line 6
	int num1, num2; //Line 7
	char ch; //Line 8
	num1 = 10; //Line 9
	num2 = 15; //Line 10
	ch = 'A'; //Line 11
	
	cout << "Line 12: Inside main: num1 = " << num1
		 << ", num2 = " << num2 << ", and ch = "
		 << ch << endl; //Line 12
	
	funOne(num1, num2, ch); //Line 13
	
	cout << "Line 14: After funOne: num1 = " << num1
		 << ", num2 = " << num2 << ", and ch = "
		 << ch << endl; //Line 14
	
	funTwo(num2, 25, ch); //Line 15
	
	cout << "Line 16: After funTwo: num1 = " << num1
		 << ", num2 = " << num2 << ", and ch = "
		 << ch << endl; //Line 16
	return 0; //Line 17
} //Line 18

void funOne(int a, int& b, char v) //Line 19
{ //Line 20
	int one; //Line 21
	one = a; //Line 22
	a++; //Line 23
	b = b * 2; //Line 24
	v = 'B'; //Line 25
	
	cout << "Line 26: Inside funOne: a = " << a
		 << ", b = " << b << ", v = " << v
<< ", and one = " << one << endl; //Line 26
} //Line 27

void funTwo(int& x, int y, char& w) //Line 28
{ //Line 29
	x++; //Line 30
	y = y * 2; //Line 31
	w = 'G'; //Line 32
	
	cout << "Line 33: Inside funTwo: x = " << x
		 << ", y = " << y << ", and w = " << w
		 << endl; //Line 33
}
