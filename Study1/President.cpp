#include "President.h"

President::President() :
	Employer()
{
	position = copyString("Unknown");
	duties = copyString("Unknown");
}

President::President(const char* name, const char* surname, const char* position, const char* duties) :
	Employer(name, surname)
{
	this->position = copyString(position);
	this->duties = copyString(duties);
}


President::President(const President& other)
{
	position = copyString(other.position);
	duties = copyString(other.duties);
}

President& President::operator=(const President& other)
{
	if (this != &other)
	{
		Employer::operator=(other);
		delete[] position;
		delete[] duties;
		position = copyString(other.position);
		duties = copyString(other.duties);
	}
	return *this;
}

void President::Print()
{
	cout << "President Information:" << endl;
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Position: " << position << endl;
	cout << "Duties: " << duties << endl;
	cout << "----------------------------------------" << endl;
}

void President::setPosition(const char* new_position)
{
	if (position != nullptr)
		delete[] position;
	position = copyString(new_position);
}

void President::setDuties(const char* new_duties)
{
	if (duties != nullptr)
		delete[] duties;
	duties = copyString(new_duties);
}


President::~President()
{
	delete[] position;
	delete[] duties;
}
