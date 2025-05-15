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

rightTriangle::~rightTriangle()
{
	cout << "Destructor rightTriangle" << endl;
}
