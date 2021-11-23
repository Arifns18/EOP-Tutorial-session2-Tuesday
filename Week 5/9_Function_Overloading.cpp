#include <iostream>

using namespace std;

double poolCapacity(double len, double wid, double dep);
double poolCapacity(double len, double wid, int dep);

int main(){

	cout << poolCapacity(1,1,1)<<endl;
	cout << poolCapacity(1,1,1.1);
	return 0;
}

double poolCapacity(double len, double wid, double dep)
{
return 1000.00;
}

double poolCapacity(double len, double wid, int dep)
{
return 5000.00;
}

