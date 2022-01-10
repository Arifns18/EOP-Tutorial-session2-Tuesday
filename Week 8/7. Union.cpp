#include <iostream>

using namespace std;

union
{
	char key;
	int num;
	double price;
}val;

int main(){

	val.key = 'B';
	cout << val.key;
	
	cout << endl;
	
	val.num = 5;
	cout << val.num;

	return 0;
}


