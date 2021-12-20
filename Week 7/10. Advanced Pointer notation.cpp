#include <iostream>

using namespace std;

int main(){

	int nums[2][3] = { {16,18,20},
                   {25,26,27} };
	
	cout << *nums[0] << endl;
	cout << *(nums[0] + 1) << endl;
	cout << *nums[1] << endl;
	cout << *(nums[1] + 1) << endl;
	return 0;
}


