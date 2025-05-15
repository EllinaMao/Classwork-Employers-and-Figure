#include "Circle.h"

Circle::Circle(double r) : radius(r) {
	SetName("Circle");
}
void Circle::ShowArea() const {
	cout << "Area of " << GetName() << ": " << 3.14 * radius * radius << endl;
}
