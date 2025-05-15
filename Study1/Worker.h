#pragma once
#include "Employer.h"
class Worker :
    public Employer
{
protected:
	char* position;
	char* workTask;
public:
	Worker();
	Worker(const char* name, const char* surname, const char* position, const char* workTask);
	Worker(const Worker& other);
	Worker& operator=(const Worker& other);
	~Worker() override;
	void Print() override;
	void setPosition(const char* new_position);
	void setDuties(const char* new_duties);
	const char* getPosition() const { return position; }
	const char* getDuties() const { return workTask; }
};

