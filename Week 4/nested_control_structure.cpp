#include <iostream>

using namespace std;

int main(){
for (int i = 1; i <= 5; i++)     //Line 1
//for (int i = 5; i >= 1; i--)

{                            //Line 2
    for (int j = 1; j <= i; j++) //Line 3
        cout << "*";         //Line 4
    cout << endl;            //Line 5
}                            //Line 6


	return 0;
}


