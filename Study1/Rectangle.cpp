#include "Rectangle.h"

Rectangle::Rectangle(double w, double h)
{
	width = w;
	height = h;
	SetName("Rectangle");
}

void Rectangle::ShowArea() const
{
	cout << "Area of " << GetName() << ": " << width * height << endl;
}

