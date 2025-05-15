#pragma once
#include "Figure.h"

class Rectangle : public Figure {
private:
    double width;
    double height;
public:

    Rectangle(double w, double h);
    void ShowArea() const override;

    double GetWidth() const { return width; }
    double GetHeight() const { return height; }
    void SetWidth(double w) { width = w; }
    void SetHeight(double h) { height = h; }
    ~Rectangle() override {
        cout << "Destructor Rectangle" << endl;
    }
};