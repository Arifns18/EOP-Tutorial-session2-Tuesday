#include <iostream>

using namespace std;

void printStars(int i);
void printStars2(int& z);

int main(){
	int j = 10, x =10;
	
	
	printStars(j);
	cout << endl;
	printStars2(x);
	cout << endl;
	
	
	
	cout << "Values of j after printStars: " << j;
	cout << endl;
	cout << "Values of x after printStars3: " << x;

return 0;
}

int global = 10;

void printStars(int i)
{
	for(int k=0; k<=i; k++)
	cout << " *";
	i++;
	
}
void printStars2(int& z)
{
	for(int k=0; k<=z; k++)
	
		cout << " *";	
	z++;
}
void printGlobal()
