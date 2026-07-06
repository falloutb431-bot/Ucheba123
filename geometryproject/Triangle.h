#pragma once
#include "Figure.h"
#include <cmath>

class Triangle : public Figure {
protected:
    double a_, b_, c_;
    double A_, B_, C_;

protected:
    Triangle(const std::string& name, double a, double b, double c,
        double A, double B, double C);

private:
    static bool isValidSides(double a, double b, double c);
    static bool isValidAngles(double A, double B, double C);

public:
    void print() const override;
};