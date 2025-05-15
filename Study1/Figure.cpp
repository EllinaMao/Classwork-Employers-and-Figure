#include "Figure.h"
#include <iostream>

Figure::Figure()
{
	name = copyString("Unknown");
}

void Figure::ShowName() const
{
	cout << "Figure name: " << name << endl;
}


void Figure::SetName(const char* n)
{
    if (name)
    {
        delete[] name;
        name = nullptr;
    }


    int size = strlen(n) + 1;
    name = new char[size];
    strcpy_s(name, size, n);
}
Figure::~Figure()
{
    cout << "Destructor Figure" << endl;
    if (name)
        delete[] name;
}

char* Figure::copyString(const char* src)
{
    size_t size = strlen(src) + 1;
    char* dest = new char[size];
    strcpy_s(dest, size, src);
    return dest;
}