#include "EquilateralTriangle.h"
#include "ShapeException.h"

EquilateralTriangle::EquilateralTriangle(double side)
    : Triangle("Равносторонний треугольник", side, side, side, 60.0, 60.0, 60.0) {
    if (side <= 0) {
        throw FigureException("Ошибка создания фигуры. Причина: длина стороны должна быть положительной");
    }
}