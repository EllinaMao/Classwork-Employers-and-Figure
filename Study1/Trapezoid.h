#pragma once
#include "Figure.h"
class Trapezoid :
    public Figure
{
private:
	double base1;
	double base2;
	double height;

public:
	Trapezoid(double b1, double b2, double h);
	void ShowArea() const override;
	double GetArea() const override;

	double GetBase1() const { return base1; }
	double GetBase2() const { return base2; }
	double GetHeight() const { return height; }
	void SetBase1(double b1) { base1 = b1; }
	void SetBase2(double b2) { base2 = b2; }
	void SetHeight(double h) { height = h; }
	~Trapezoid() override;
};

