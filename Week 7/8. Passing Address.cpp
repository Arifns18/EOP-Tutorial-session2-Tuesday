#include <iostream>

using namespace std;

void swap(double *nm1addr, double *nm2addr)
{
	cout << "Number whose address is in nm1addr: " << *nm1addr << endl;
	cout << "Number whose address is in nm2addr: " << *nm2addr << endl;
	return;
}

int main(){

	double firstnum = 20.5, secnum =6.25;
	
	swap(&firstnum, &secnum);

	return 0;
}




