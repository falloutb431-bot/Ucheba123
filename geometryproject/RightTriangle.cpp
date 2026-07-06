
#include "RightTriangle.h"
#include "ShapeException.h"

RightTriangle::RightTriangle(double a, double b, double c, double A, double B)
    : Triangle("Прямоугольный треугольник", a, b, c, A, B, 90.0) {
    if (!(std::fabs((A + B) - 90.0) < Triangle::kEpsilon)) {
        throw FigureException("Ошибка создания фигуры. Причина: углы не соответствуют прямоугольному треугольнику (A+B != 90)");
    }
}