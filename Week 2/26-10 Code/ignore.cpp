#include <iostream>

using namespace std;

int main(){

	int a, b;
//	input: 
//	25 67 89 43 72 
//	12 78 34

	cin >> a;
	cin.ignore(100, '\n');
	cin >> b;
	
	cout << a << endl;
	cout << b;
//	The first statement, cin >> a;, stores 25 in a. The second statement,
//	cin.ignore(100, '\n');, discards all of the remaining numbers in the first line.
//	The third statement, cin >> b;, stores 12 (from the next line) in b.
	return 0;
}

