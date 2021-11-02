#include <iostream>

using namespace std;

int main(){

	int max, a, b;
	
	cout << "Enter two number separated by space: ";
	cin >> a >> b;
	
	max = (a>b) ? a : b;
	
	cout<< max;
	
	return 0;
}


