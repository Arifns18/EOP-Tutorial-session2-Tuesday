//How to use predefined functions.
//This program uses the math functions pow and sqrt to determine
//and output the volume of a sphere, the distance between two
//points, respectively, and the string function length to find
//the number of characters in a string.
//If the radius of the sphere is r, then the volume of the sphere
//is (4/3)*PI*r^3. If (x1,y1) and (x2,y2) are the coordinates of two
//points in the XY-plane, then the distance between these points is
//sqrt((x2-x1)^2 + (y2-y1)^2).

#include <iostream>
#include <cmath>
#include <string>

using namespace std;
const double PI = 3.1416;

int main()
{
	double sphereRadius;
	double sphereVolume;
	double point1X, point1Y;
	double point2X, point2Y;
	double distance;
	
	string str;
	
	cout << "Enter the radius of the sphere: ";
	cin >> sphereRadius;
	cout << endl;
	
	sphereVolume = (4.0 / 3.0) * PI * pow(sphereRadius, 3);
	cout << "The volume of the sphere is: "
		<< sphereVolume << endl << endl;
	
	cout << "Enter the coordinates of two "
		<< "points in the X-Y plane: ";
	cin >> point1X >> point1Y >> point2X >> point2Y;
	cout << endl;
	
	distance = sqrt(pow(point2X - point1X, 2)
				+ pow(point2Y - point1Y, 2));
	
	cout << "The distance between the points "
		 << "(" << point1X << ", " << point1Y << ") and "
		 << "(" << point2X << ", " << point2Y << ") is: "
		 << distance << endl << endl;
	
	str = "Programming with C++";
	
	cout << "The number of characters, "
		 << "including blanks, in \n \"" << str
		 << "\" is: " << str.length() << endl;
	return 0;
}
