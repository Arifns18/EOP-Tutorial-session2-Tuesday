//Using Pointers

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
void display(studentType *);// "*"

int main(){

//Struct variables
studentType student;
student.firstName = "Arif";
student.testScore = 5;

display(&student);// Pass struct as argument (&struct variable name)

	return 0;
}

//Receiving Prameter
void display(studentType *student) // "*"
{
	cout << student->firstName;// ->
	cout << endl;
	cout << (student)->testScore;// ->
	cout << endl;
	cout << (--student)->testScore;// ->
	cout << endl;
}

