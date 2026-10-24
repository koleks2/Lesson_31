#pragma once
#include "Figure.h"

class Rectangle : public Figure {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double GetArea() const override {
        return width * height;
    }
};