#include <iostream>

using namespace std;

void displayNumberRef(int& number);
void displayNumber(int number);

int main(){
	int a =10, b=10;
	
	displayNumberRef(a);
	displayNumber(b);
	
	cout << "Current value of a: " << a;
	cout << endl;
	cout << "Current value of b: " << b;

	return 0;
}

void displayNumberRef(int& number)
{
	number = number + 10;
	cout << number << endl;
}

void displayNumber(int number)
{
	number = number + 10;
	cout << number << endl;
}

