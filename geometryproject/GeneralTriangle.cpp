#include "GeneralTriangle.h"
#include "ShapeException.h"

GeneralTriangle::GeneralTriangle(double a, double b, double c, double A, double B, double C)
    : Triangle("Треугольник", a, b, c, A, B, C) {
    // Вся валидация уже выполнена в конструкторе Triangle
}