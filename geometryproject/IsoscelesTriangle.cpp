#include "IsoscelesTriangle.h"
#include "ShapeException.h"

IsoscelesTriangle::IsoscelesTriangle(double a, double b, double c, double A, double B, double C)
    : Triangle("Равнобедренный треугольник", a, b, c, A, B, C) {
    // Проверяем, что хотя бы одна пара сторон и углов совпадает (по условию задачи: a==c и A==C)
    if (!(std::fabs(a - c) < Triangle::kEpsilon) || !(std::fabs(A - C) < Triangle::kEpsilon)) {
        throw FigureException("Ошибка создания фигуры. Причина: не выполнены условия равнобедренного треугольника (a!=c или A!=C)");
    }
}