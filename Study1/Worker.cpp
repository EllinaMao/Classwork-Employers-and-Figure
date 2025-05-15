#include "Worker.h"

Worker::Worker()
{
	position = copyString("Unknown");
	workTask = copyString("Unknown");
}
Worker::Worker(const char* name, const char* surname, const char* position, const char* workTask) :
	Employer(name, surname)
{
	this->position = copyString(position);
	this->workTask = copyString(workTask);
}
Worker::Worker(const Worker& other)
{
	position = copyString(other.position);
	workTask = copyString(other.workTask);
}
	
Worker& Worker::operator=(const Worker& other)
{
	if (this != &other)
	{
		Employer::operator=(other);
		delete[] position;
		delete[] workTask;
		position = copyString(other.position);
		workTask = copyString(other.workTask);
	}
	return *this;
}
Worker::~Worker()
{
	delete[] position;
	delete[] workTask;
}
void Worker::Print()
{
	cout << "Worker Information:" << endl;
	cout << "Name: " << name << endl;
	cout << "Surname: " << surname << endl;
	cout << "Position: " << position << endl;
	cout << "Work Task: " << workTask << endl;
	cout << "----------------------------------------" << endl;
}
void Worker::setPosition(const char* new_position)
{
	if (position != nullptr)
		delete[] position;
	position = copyString(new_position);
}
void Worker::setDuties(const char* new_duties)
{
	if (workTask != nullptr)
		delete[] workTask;
	workTask = copyString(new_duties);
}
