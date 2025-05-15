#include "Employer.h"


Employer::Employer()
{
	size_t size = strlen("Unknown") + 1;
   name = new char[size];
   strcpy_s(name, size, "Unknown");
   surname = new char[size];
   strcpy_s(surname, size, "Unknown");
}

Employer::Employer(const char* name, const char* surname)
{
	size_t size = strlen(name) + 1;
	this->name = new char[size];
	strcpy_s(this->name, size, name);

	size = strlen(surname) + 1;
	this->surname = new char[size];
	strcpy_s(this->surname, size, surname);
}

Employer::Employer(const Employer& other)
{
	size_t size = strlen(other.name) + 1;
	name = new char[size];
	strcpy_s(name, size, other.name);
	size = strlen(other.surname) + 1;
	surname = new char[size];
	strcpy_s(surname, size, other.surname);
}

Employer& Employer::operator=(const Employer& other)
{
	if (this != &other)
	{
		delete[] name;
		delete[] surname;
		size_t size = strlen(other.name) + 1;
		name = new char[size];
		strcpy_s(name, size, other.name);
		size = strlen(other.surname) + 1;
		surname = new char[size];
		strcpy_s(surname, size, other.surname);

	}
	return *this;
}

void Employer::setName(const char* name)
{
	delete[] this->name;
	size_t size = strlen(name) + 1;
	this->name = new char[size];
	strcpy_s(this->name, size, name);
}

void Employer::setSurname(const char* surname)
{
	delete[] this->surname;
	size_t size = strlen(surname) + 1;
	this->surname = new char[size];
	strcpy_s(this->surname, size, surname);
}

char* Employer::copyString(const char* src)
{
	size_t size = strlen(src) + 1;
	char* dest = new char[size];
	strcpy_s(dest, size, src);
	return dest;
}

Employer::~Employer()
{
	delete[] name;
	delete[] surname;
}