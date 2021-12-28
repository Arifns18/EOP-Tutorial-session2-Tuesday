#include <iostream>

using namespace std;

int main(){
	const int ARRAY_SIZE = 1000;
	struct listType
	{
	 int listElem[ARRAY_SIZE]; //array containing the list
	 int listLength; //length of the list
	};
	
	listType intList;
	
	intList.listLength = 0;
	intList.listElem[0] = 12;
	intList.listLength++;
	intList.listElem[1] = 37; 
	intList.listLength++; 
	
	
	cout << intList.listElem[0] << endl;;
	cin >> intList.listElem[2];
	cout << intList.listElem[2];
	return 0;
}


