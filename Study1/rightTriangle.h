#pragma once
#include "Figure.h"
class rightTriangle :
    public Figure
{
private:
	double base;
	double height;
public:
	rightTriangle(double b, double h);
	void ShowArea() const override;


	double GetBase() const { return base; }
	double GetHeight() const { return height; }
	void SetBase(double b) { base = b; }
	void SetHeight(double h) { height = h; }
	~rightTriangle() override;
};

