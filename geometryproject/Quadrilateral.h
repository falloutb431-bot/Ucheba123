#pragma once
#include "Figure.h"

class Quadrilateral : public Figure {
protected:
    double a_, b_, c_, d_;
    double A_, B_, C_, D_;

protected:
    Quadrilateral(const std::string& name,
        double a, double b, double c, double d,
        double A, double B, double C, double D);

private:
    static bool isValidAngles4(double A, double B, double C, double D);

public:
    void print() const override;
};