#pragma once
#include "Employer.h"
class President :
    public Employer
{
protected:
	char* position;
	char* duties;
	
public:
	President();
	President(const char* name, const char* surname, const char* position, const char* duties);
	President(const President& other);
	President& operator=(const President& other);
	~President() override;
	void Print() override;
	void setPosition(const char* new_position);
	void setDuties(const char* new_duties);

	const char* getPosition() const { return position; }
	const char* getDuties() const { return duties; }
};

