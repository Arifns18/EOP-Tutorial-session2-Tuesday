#include <iostream>

using namespace std;

int main(){
	
	const int NUMCODES = 6;
	//Array of 6 character
	char code[6] = {'s', 'a', 'm', 'p', 'l', 'e'};


	for (int i = 0; i < NUMCODES; i++)
	{
		cout << code[i];
		cout <<  endl;
	}

	//Will use 7 character.
	char code2[ ] = "sample"; // code2 [] = {'s','a','m','p','l','e','\0'},
	for (int i = 0; i <= NUMCODES; i++)
	{
		cout << code2[i];
		cout <<  endl;
	}
	
	//Cout code3 [6] = '\0'
	char code3 [] = {'s','a','m','p','l','e','\0'};
	cout << code3 [5];
	cout <<  endl;
	cout << code3 [6];
	cout << "endline";
	cout <<  endl;
	code3 [0] = '\0';
	cout << code3 [0];
	cout << "endline";
	return 0;
}


