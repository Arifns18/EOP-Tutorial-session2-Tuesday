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

void readIn(studentType& address); //Pass as reference
void printStudent(studentType student2); //Pass as value

int main(){
	studentType student;
	student.firstName = "Arif";
	printStudent(student);
	readIn(student);
	return 0;
}

void readIn(studentType& address)
{
	cout << "Pass by Reference";
	cout << endl;
	cout << address.firstName;
	cout << endl;
}

void printStudent(studentType student2)
{
	cout << "Pass by value";
	cout << endl;
	cout << student2.firstName;
	cout << endl;
}

