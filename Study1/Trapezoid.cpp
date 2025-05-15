#include "Trapezoid.h"

Trapezoid::Trapezoid(double b1, double b2, double h)
{
	base1 = b1;
	base2 = b2;
	height = h;
	SetName("Trapezoid");
}

void Trapezoid::ShowArea() const
{
	cout << "Area of " << GetName() << ": " << 0.5 * (base1 + base2) * height << endl;
}

double Trapezoid::GetArea() const
{
	return (0.5 * (base1 + base2) * height);
}

Trapezoid::~Trapezoid()
{
	cout << "Destructor Trapezoid" << endl;
}
