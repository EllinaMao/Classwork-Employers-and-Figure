#include "rightTriangle.h"

rightTriangle::rightTriangle(double b, double h)
{
	base = b;
	height = h;
	SetName("rightTriangle");
}
void rightTriangle::ShowArea() const
{
	cout << "Area of " << GetName() << ": " << 0.5 * base * height << endl;
}

double rightTriangle::GetArea() const
{
	return (0.5 * base * height);
}

rightTriangle::~rightTriangle()
{
	cout << "Destructor rightTriangle" << endl;
}
