/* 
Arrays with more than two dimensions allowed in C++ but not commonly used
Example: int response[4][10][6]
First element is response[0][0][0]
Last element is response[3][9][5]
*/

#include <iostream>

using namespace std;

int main(){
	int response[4][10][6] = {
							/*page 0*/{/*row 0 */{ 1,2,3},/*row 1 */{7,8,9}},
							/*page 1*/{{3,4,5},{6,7,8}}
							};

	for (int i=0; i<4; i++ )
	{
		cout <<"Page " << i << endl;
		for (int j=0; j<10; j++ )
		{
	
			for (int k=0; k<6; k++ )
			{
				cout << response[i][j][k];
			}
		cout <<endl;
		}
		
	}
	
	return 0;
}


