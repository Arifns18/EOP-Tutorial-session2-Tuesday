/*
When array is passed to a function, 
address of first location is the only item passed

*/
#include <iostream>

int findMax(int [], int);
int findMax2(int *, int);

using namespace std;

int main(){

	const int NUMPTS = 5;
	int nums [NUMPTS] = {2, 18, 1, 27, 16};
	
	cout << "\n The Maximum value is "
		 << (findMax(nums,NUMPTS)) << endl;
		 
		 cout << "\n The Maximum value is "
		 << (findMax2(nums,NUMPTS)) << endl;

	return 0;
}
//Passing array using conventional array notation
int findMax(int vals[], int numels)
{
	int i, max = vals[0];
	
	for (i=1; i < numels; i++)
	
		if(max < vals[i])
			max = vals[i];
	
	return max;
}
//Passing array using pointer
int findMax2(int *vals, int numels)
{
	int i, max = vals[0];
	
	for (i=1; i < numels; i++)
	
		if(max < vals[i])
			max = vals[i];
	
	return max;
}

