#include <iostream>
using namespace std;

class person
{
public:
	string name = "Razzaque", address = "Kandivali";
};
class student : public person
{
	int rollno = 169, tMarks = 490;

public:
	void stdDetails()
	{
		cout << "***** Details of the Student *****" << endl << endl;
		cout << "Name: " << person::name << endl << "Address: " << person::address << endl << "Roll no: " << rollno << endl << "Total marks: " << tMarks << endl << endl;
	}
};
class emp : public person
{
	int eno = 101, salary = 10000;

public:
	void empDetails()
	{
		cout << "***** Details of the Employee *****" << endl << endl;
		cout << "Name: " << person::name << endl << "Address: " << person::address << endl << "Employee no: " << eno << endl << "Salary: " << salary << endl << endl;
	}
};

int main()
{
	student s1;
	emp e1;
	s1.stdDetails();
	e1.empDetails();
	return 0;
}