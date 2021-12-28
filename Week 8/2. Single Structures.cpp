#include <iostream>

using namespace std;

struct studentType
{
 string firstName;
 string lastName;
 char courseGrade;
 int testScore;
 int programmingScore;
 double GPA;
};

int main(){

 //Struct variables
studentType newStudent;
studentType student;

student.firstName = "Arif";

cin >> newStudent.firstName;

 if (student.firstName == newStudent.firstName) // Comparison
 cout << "Existed";
 else
 cout << "New Student";

/*
!!Important!!
if (student == newStudent) //illegal
Cannot compare struct variable
*/

	return 0;
}


