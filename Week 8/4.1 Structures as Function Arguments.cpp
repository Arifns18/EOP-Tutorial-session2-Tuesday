#include <iostream>

using namespace std;
//Global struct
struct studentType 
{
 string firstName;
 string lastName;
 char courseGrade;
 int testScore;
 int programmingScore;
 double GPA;
};

//Function prototype with struct Datatype
void display(studentType);//

int main(){

//Struct variables
studentType student;

student.firstName = "Arif";

display(student);// Pass struct as argument

	return 0;
}

//Receiving Parameter
void display(studentType student)
{
	cout << student.firstName;
}

