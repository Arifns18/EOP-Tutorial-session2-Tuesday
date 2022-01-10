#include <iostream>

using namespace std;

struct Details
{
	string name;
	string phoneNo;
};

int main(){

	Details *person;
	person = new Details;
	
	cin >> person->name;
	cout << person->name;
	return 0;
}


