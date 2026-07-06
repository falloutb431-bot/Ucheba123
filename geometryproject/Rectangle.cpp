#include "Rectangle.h"
#include "ShapeException.h"

Rectangle::Rectangle(double a, double b)
    : Quadrilateral("Прямоугольник", a, b, a, b, 90.0, 90.0, 90.0, 90.0) {
    if (a <= 0 || b <= 0) {
        throw FigureException("Ошибка создания фигуры. Причина: длины сторон должны быть положительными");
    }
}