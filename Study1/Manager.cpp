#include "Manager.h"

Manager::Manager()
{
	department = copyString("Unknown");
	responsibilities = copyString("Unknown");
}
Manager::Manager(const char* name, const char* surname, const char* department, const char* responsibilities) :
	Employer(name, surname)
{
	this->department = copyString(department);
	this->responsibilities = copyString(responsibilities);
}
Manager::Manager(const Manager& other)
{
	department = copyString(other.department);
	responsibilities = copyString(other.responsibilities);
}
Manager& Manager::operator=(const Manager& other)
{
	if (this != &other)
	{
		Employer::operator=(other);
		delete[] department;
		delete[] responsibilities;
		department = copyString(other.department);
		responsibilities = copyString(other.responsibilities);
	}
	return *this;
}
Manager::~Manager()
{
	delete[] department;
	delete[] responsibilities;
}
void Manager::Print()
{
	cout << "Manager Information:" << endl;
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Department: " << department << endl;
	cout << "Responsibilities: " << responsibilities << endl;
	cout << "----------------------------------------" << endl;
}
void Manager::setDepartment(const char* new_department)
{
	if (department != nullptr)
		delete[] department;
	department = copyString(new_department);
}
void Manager::setResponsibilities(const char* new_responsibilities)
{
	if (responsibilities != nullptr)
		delete[] responsibilities;
	responsibilities = copyString(new_responsibilities);
}

