#include <iostream>

using namespace std;

int main(){
	int sum = 0;
	int num;
	
	cin >> num;
	while (cin)
	{
	if (num < 0)
	{
	cout << "Negative number found in the data." << endl;
	cout << "Sum: " << sum << endl;
	cin >> num;
	continue;
	}
	sum = sum + num;
	cin >> num;
	}

	return 0;
}


