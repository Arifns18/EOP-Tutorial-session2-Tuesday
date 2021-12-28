#include <iostream>


using namespace std;

int main(){
struct employeeType
{
 string firstName;
 string lastName;
 int personID;
 string deptID;
 double yearlySalary;
 double monthlySalary;
 double yearToDatePaid;
 double monthlyBonus;
};

//Initialize array of type structure
employeeType employees[10]={"A","B", 1, "C", 2 , 3, 4, 5,
							"WER","Ber",1, "C", 2 , 3, 4, 5,
							"Intro","Program"};


//Access array of type structure
for (int counter = 0; counter < 10; counter++)
{
 cout << employees[counter].firstName;
 cout << endl;
 cout << employees[counter].lastName;
 cout << endl;
 
}
	return 0;
}


