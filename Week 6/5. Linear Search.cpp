#include <iostream>

using namespace std;

int linearSearch(int list[], int key, int length);

int main(){

	int list[] = {1, 4, 4, 2, 5, -3, 6, 2};
	
	//cout << sizeof(list)/sizeof(list[0]) <<endl;
	
	int i = linearSearch(list, 4, sizeof(list)/sizeof(list[0]) ); // returns 1
	cout << i <<endl;
	
	int j = linearSearch(list, -4, 8); // returns -1
	cout << j <<endl;
	
	int k = linearSearch(list, -3, 8); // returns 5
	cout << k <<endl;


	return 0;
}

int linearSearch(int list[], int key, int length) {
  for (int i = 0; i < length; i++)
    if (key == list[i])
      return i;
  return -1;
}


