#include <iostream>

using namespace std;

//When making function with 2-d array parameter, the column size is required
void passValue(int val [][4]);

int main(){
	int val[3][4] = { 
						/*0*/{8,16,9,52},
			        	/*1*/{3,15,27,6},
			        	/*2*/{14,25,2,10} 
					};

	for(int i=0; i<3; i++)
	{
		for (int j=0; j<4; j++)	
		cout << val[i][j];
		cout << endl;
	}
	
	passValue(val);
	return 0;
}

//function call

void passValue(int val [][4])
{
	cout << val[0][0];
}


