#pragma once
#include "Employer.h"
class Manager :
    public Employer
{
protected:
	char* department;
	char* responsibilities;
public:
	Manager();
	Manager(const char* name, const char* surname, const char* department, const char* responsibilities);
	Manager(const Manager& other);
	Manager& operator=(const Manager& other);
	~Manager() override;
	void Print() override;
	void setDepartment(const char* new_department);
	void setResponsibilities(const char* new_responsibilities);
	const char* getDepartment() const { return department; }
	const char* getResponsibilities() const { return responsibilities; }
};

