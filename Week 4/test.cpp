#include <iostream>

using namespace std;

int main(){

	int counter = 3;
	int value, sentinel = 5;
	
	int num, sum=0;
	bool isFound = false;
	
//	while (counter<3)
//	{
//		cout << "Line: " << counter << endl;
//		counter++;
//	}
	
//	while (value!=sentinel)
//	{
//		cin >> value;
//	}
//	cout << endl << "End of program";

//	while (!isFound)
//	{
//		cin >> num;
//		
//		if (num<0)
//		{
//			cout << "Sum: " << sum;
//			isFound = true;
//		}
//		
//		else
//			sum += num;
//	}

	for (int i = 1; i<5; i++)
	{
		for(int j=0; j<i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

//	do
//	{
//		cout << "Line: " << counter << endl;
//		counter++;	
//	}while (counter<3);
	
	return 0;
}


