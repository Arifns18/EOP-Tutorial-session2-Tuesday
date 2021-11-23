#include <iostream> //Line 1
#include <iomanip> //Line 2

using namespace std; //Line 3

int volume(int l = 1, int w = 1, int h = 1); //Line 4
void funcOne(int& x, double y = 12.34, char z = 'B'); //Line 5

int main() //Line 6
{ //Line 7
	int a = 23; //Line 8
	double b = 48.78; //Line 9
	char ch = 'M'; //Line 10
	
	cout << fixed << showpoint << setprecision(2); //Line 11
	
	cout << "Line 12: a = " << a << ", b = "
		 << b << ", ch = " << ch << endl; //Line 12
	cout << "Line 13: Volume = " << volume()
		 << endl; //Line 13
	
	cout << "Line 14: Volume = " << volume(5, 4)
		 << endl; //Line 14
	
	cout << "Line 15: Volume = " << volume(34)
		 << endl; //Line 15
	
	cout << "Line 16: Volume = "
		 << volume(6, 4, 5) << endl; //Line 16
	funcOne(a); //Line 17
	funcOne(a, 42.68); //Line 18
	funcOne(a, 34.65, 'Q'); //Line 19
	cout << "Line 20: a = " << a << ", b = "
	<< b << ", ch = " << ch << endl; //Line 20
	return 0; //Line 21
} //Line 22

int volume(int l, int w, int h) //Line 23
{ //Line 24
	return l * w * h; //Line 25
} //Line 26

void funcOne(int& x, double y, char z) //Line 27
{ //Line 28
	x = 2 * x; //Line 29
	cout << "Line 30: x = " << x << ", y = "
	<< y << ", z = " << z << endl; //Line 30
}
