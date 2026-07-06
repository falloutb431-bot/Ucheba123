#include "Square.h"
#include "ShapeException.h"

Square::Square(double side)
    : Quadrilateral("Квадрат", side, side, side, side, 90.0, 90.0, 90.0, 90.0) {
    if (side <= 0) {
        throw FigureException("Ошибка создания фигуры. Причина: длина стороны должна быть положительной");
    }
}