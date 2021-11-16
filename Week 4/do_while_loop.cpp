/*
Structure:
do
	statement
while (expression);
*/

//Program: Divisibility test by 3 and 9
#include <iostream>
using namespace std;
int main()
{
	int num, temp, sum;
	cout << "Enter a positive integer: ";
	cin >> num;
	cout << endl;
	
	temp = num;
	sum = 0;
	do
	{
		sum = sum + num % 10; //extract the last digit
		//12345
		//and add it to sum
		num = num / 10; //remove the last digit
		//12345/10 = 1234.5 ~ 1234/ ... 1/10 =0.1
	}
	while (num > 0);
	
		cout << "The sum of the digits = " << sum << endl;
	if (sum % 9 == 0)
		cout<< temp << " is divisible by 3 and 9" << endl;
	else if (sum % 3 == 0)
		cout<< temp << " is divisible by 3, but not 9" << endl;
	else
		cout<< temp << " is not divisible by 3 or 9" << endl;
	return 0;
}
