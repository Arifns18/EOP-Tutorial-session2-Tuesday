/*
struct structName
{ 
 dataType1 identifier1;
 dataType2 identifier2;
 .
 .
 .
 dataTypen identifiern;
};
*/

#include <iostream>

using namespace std;

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


tempHouse.numOfBedrooms = 5; //Accessing structure : variables.identifier

cout << tempHouse.numOfBedrooms << endl;
cin >> tempHouse.numOfBedrooms;
cout << tempHouse.numOfBedrooms;

	return 0;
}


