#include "Quadrilateral.h"
#include "ShapeException.h"
#include <iostream>

Quadrilateral::Quadrilateral(const std::string& name,
    double a, double b, double c, double d,
    double A, double B, double C, double D)
    : Figure(name, 4, 360.0) {
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        throw FigureException("Ошибка создания фигуры. Причина: длины сторон должны быть положительными");
    }
    if (!isValidAngles4(A, B, C, D)) {
        throw FigureException("Ошибка создания фигуры. Причина: сумма углов не равна 360");
    }

    a_ = a; b_ = b; c_ = c; d_ = d;
    A_ = A; B_ = B; C_ = C; D_ = D;
}

bool Quadrilateral::isValidAngles4(double A, double B, double C, double D) {
    if (A <= 0 || B <= 0 || C <= 0 || D <= 0) return false;
    double sum = A + B + C + D;
    return std::fabs(sum - 360.0) < Figure::kEpsilon;
}

void Quadrilateral::print() const {
    std::cout << getName()
        << " (стороны " << a_ << ", " << b_ << ", " << c_ << ", " << d_
        << "; углы " << A_ << ", " << B_ << ", " << C_ << ", " << D_
        << ") создан\n";
}