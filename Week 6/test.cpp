#include <iostream>

using namespace std;

const int size = 3;

void displayList(int [], int size);

int main(){

	int numberList[size] = {1, 2, 3};
	displayList(numberList,size);

	return 0;
}

void displayList(int list[], int size)
{
	for (int i=0; i<size; i++)
	cout << list[i];
}
