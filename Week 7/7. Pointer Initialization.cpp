#include <iostream>

using namespace std;

int main(){
	//Produce error
	// miles need to be declared before pointer ptNum
//	int *ptNum = &miles;
//	int miles;
	
	int miles;
	int *ptNum = &miles;
	
//	Arrays can be initialized within declarations 
//!!Require pointer and variable to be of same datatype!!

	//Produce Error
//	int prices[10];
//	double *zing = &prices[0];

	double prices[10];
	double *zing = &prices[0];


	return 0;
}


