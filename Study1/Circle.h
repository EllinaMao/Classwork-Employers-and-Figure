#pragma once
#include "Figure.h"

class Circle :
    public Figure
{
private:
	double radius;

public:
	explicit Circle(double r);
	void ShowArea() const override;

	double GetRadius() const { return radius; }
	void SetRadius(double r) { radius = r; }
	~Circle() override {
		cout << "Destructor Circle" << endl;//
	}
};

