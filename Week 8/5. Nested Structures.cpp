#include <iostream>

using namespace std;

/*
//Given:
struct employeeType
{
 string firstname;
 string middlename;
 string lastname;
 string empID;
 string address1;
 string address2;
 string city;
 string state;
 string zip;
 int hiremonth;
 int hireday;
 int hireyear;
 int quitmonth;
 int quitday;
 int quityear;
 string phone;
 string cellphone;
 string fax;
 string pager;
 string email;
 string deptID;
 double salary;
};
*/

//Categorize to organize the structures
struct nameType
{
 string first;
 string middle;
 string last;
};

struct addressType
{
 string address1;
 string address2;
 string city;
 string state;
 string zip;
};

struct dateType
{ 
 int month;
 int day;
 int year;
};

struct contactType
{
 string phone;
 string cellphone;
 string fax;
 string pager;
 string email;
};
//Organized new structure from the original structures
struct employeeType
{
 nameType name;
 string empID;
 addressType address;
 dateType hireDate;
 dateType quitDate;
 contactType contact;
 string deptID;
 double salary;
};

int main(){
	employeeType newEmployee;
	newEmployee.name.first = "Arif";
	
	cout << newEmployee.name.first;
	cout << endl;
	
	//Decalre Array
	employeeType employees[5];
	
	//Access the structures to store values
	for (int j = 0; j <5; j++)
 		{
 			cin >> employees[j].name.first >> employees[j].name.middle
 			>> employees[j].name.last;
		}

	//Access the structures to display values
	for (int j = 0; j <5; j++)
 		{
 			cout << employees[j].name.first << employees[j].name.middle
 			<< employees[j].name.last;
		}

	return 0;
}


