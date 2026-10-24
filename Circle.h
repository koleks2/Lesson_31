#pragma once
#include "Figure.h"

class Circle : public Figure {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double GetArea() const override {
        return 3.14 * radius * radius;
    }
};

