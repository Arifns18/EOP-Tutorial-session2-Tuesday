/*
//Global
struct structName
{ 
 dataType1 identifier1;
 dataType2 identifier2;
 .
 .
 .
 dataTypen identifiern;
}; {optional} Declare variable of type structure

int main()
{
//Local
struct 
	{ 
	 dataType1 identifier1;
	 dataType2 identifier2;
	 .
	 .
	 .
	 dataTypen identifiern;
	}; Declare variable of type structure
}
*/

#include <iostream>

using namespace std;

/*Global Declaration*/
struct houseType //structname
{
string style;
 int numOfBedrooms; // datatype identifier
 int numOfBathrooms;
 int numOfCarsGarage;
 int yearBuilt;
 int finishedSquareFootage;
 double price;
 double tax;
} tempHouse; //Declare variables of types structures

int main(){
/*Local Declaration*/
//struct 
//{
//string style;
// int numOfBedrooms; // datatype identifier
// int numOfBathrooms;
// int numOfCarsGarage;
// int yearBuilt;
// int finishedSquareFootage;
// double price;
// double tax;
//} tempHouse; //Declare variables of types structures


tempHouse.numOfBedrooms = 5; //Accessing structure : variables.identifier

cout << tempHouse.numOfBedrooms << endl;
cin >> tempHouse.numOfBedrooms;
cout << tempHouse.numOfBedrooms;

	return 0;
}


