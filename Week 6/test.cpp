#include <iostream>

using namespace std;

const int row = 3, col = 5;
void listArray(int [][col], int row, int col);

int main(){

	int val[row][col] = {
					{1,2,3,4,5},
					{6,7,8,9,10},
					{11,12,13,14,15}
					};

	listArray(val,row,col);
	return 0;
}

void listArray(int list[][col], int row, int col)
{

	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		cout << list[i][j];
		cout << endl;
	}
	
}
