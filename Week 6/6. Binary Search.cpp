#include <iostream>

using namespace std;
int binarySearch(int list[], int key, int length);
int main(){

	//Binary seacrh need the array elements to be ordered ascendingly
	int list[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = binarySearch(list, 3, sizeof(list)/sizeof(list[0]));
	cout<< i << endl;
	return 0;
}

//Start search from the middle

int binarySearch(int list[], int key, int length) {
	int low = 0;
	int high = length - 1;

	while (high >= low) 
	{
	int mid = (low + high) / 2;
		//Compare with middle aray element.
		//If lower, it will search first half of the array
    	if (key < list[mid])
    		high = mid - 1;
    	//If Equal, it will end the search
    	else if (key == list[mid])
    		return mid;
    	//If Higher, it will second half of the array
    	else
    		low = mid + 1;
	}
  return -1 - low;
}

