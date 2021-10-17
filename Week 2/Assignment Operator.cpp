//#include <iostream>
//
//using namespace std;
//
//int main(){
//	
//	int num1, num2;
//	double sale;
//	char first;
//	string str;
//	
//	num1 = 4;
//	num2 = 4 * 5 - 11;
//	sale = 0.02 * 1000;
//	first = 'D';
//	str = "It is a sunny day.";
//	
//	cout << num1 << endl;
//	cout << num2 << endl;
//	cout << sale << endl;
//	cout << first << endl;
//	cout << str << endl;
//
//	return 0;
//}



// This program illustrates how data in the variables are
// manipulated.

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int num1, num2;
//	double sale;
//	char first;
//	string str;
//	
//	num1 += 4;
//	cout << "num1 = " << num1 << endl;
//	
//	num2 = 4 * 5 - 11;
//	cout << "num2 = " << num2 << endl;
//	
//	sale = 0.02 * 1000;
//	cout << "sale = " << sale << endl;
//	
//	first = 'D';
//	cout << "first = " << first << endl;
//	
//	str = "It is a sunny day.";
//	cout << "str = " << str << endl;
//	return 0;
//}



// Compound assignment statement

#include <iostream>

using namespace std;

int main(){
	
	int 
	i = 5,
	counter = 1,
	sum = 5,number = 5,
	amount = 10, interest = 5,
	x = 20 , y = 5,
	mod = 24;
	
//	i = i + 5; 
	//i += 5;
//	counter = counter + 1;
	counter += 1;
//	sum = sum + number;
	sum += number;
//	amount = amount * (interest + 1);
	amount *= interest + 1;
//	x = x / (y + 5);
	x /= y + 5;
//	mod = mod % 10;
	mod %= 10;
	
	
	
	cout << i << endl;
	cout << counter << endl;
	cout << sum << endl;
	cout << amount << endl;
	cout << x << endl;
	cout << mod;
	
	return 0;
}
