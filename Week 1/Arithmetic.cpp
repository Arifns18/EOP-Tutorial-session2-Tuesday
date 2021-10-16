/*
	Arithmetic
		+ addition
		- subtraction (or negation)
		* multiplication
		/ division
		% mod (modulus or remainder)

	**Follows bodmas rule
*/
#include <iostream>

using namespace std;

int main(){

	int a;
	int b;
	int sum;
	
	cout << "Insert the value for a: \n";
	cin >> a;
	cout << "Insert the value for b: \n";
	cin >> b;
	sum = a * b + 10 - 5;
	cout << a << " * "<< b << " + 10 - 5= " << sum;

	return 0;
}

