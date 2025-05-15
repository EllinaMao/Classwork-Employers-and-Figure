#pragma once
#include <iostream>
using namespace std;

// Abstract class Employer with pure virtual function Print()
class Employer
{
protected:
	char* name;
	char* surname;
	char* copyString(const char* src);
public:

	virtual void Print() = 0; 
	virtual ~Employer();

	Employer();
	Employer(const char* name, const char* surname);
	
	Employer(const Employer& other);

	Employer& operator=(const Employer& other);

	// Getters
	const char* getName() const{return name;}
	const char* getSurname() const{return surname;}

	// Setters
	void setName(const char* name);
	void setSurname(const char* surname);


};
