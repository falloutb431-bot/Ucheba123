#include "Triangle.h"
#include "ShapeException.h"
#include <iostream>
#include <iomanip>

Triangle::Triangle(const std::string& name, double a, double b, double c,
    double A, double B, double C)
    : Figure(name, 3, 180.0) {
    // Сначала валидируем входные данные
    if (!isValidSides(a, b, c)) {
        throw FigureException("Ошибка создания фигуры. Причина: стороны не удовлетворяют неравенству треугольника или неположительны");
    }
    if (!isValidAngles(A, B, C)) {
        throw FigureException("Ошибка создания фигуры. Причина: сумма углов не равна 180");
    }

    a_ = a; b_ = b; c_ = c;
    A_ = A; B_ = B; C_ = C;
}

bool Triangle::isValidSides(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) return false;
    return (a + b > c) && (a + c > b) && (b + c > a);
}

bool Triangle::isValidAngles(double A, double B, double C) {
    if (A <= 0 || B <= 0 || C <= 0) return false;
    double sum = A + B + C;
    return std::fabs(sum - 180.0) < kEpsilon;
}

void Triangle::print() const {
    std::cout << getName()
        << " (стороны " << a_ << ", " << b_ << ", " << c_
        << "; углы " << A_ << ", " << B_ << ", " << C_
        << ") создан\n";
}