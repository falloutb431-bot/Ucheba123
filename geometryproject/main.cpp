#include <iostream>
#include <memory>
#include "ShapeException.h"
#include "Triangle.h"
#include "GeneralTriangle.h"      // <-- добавлен
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"

int main() {
    try {
        auto t1 = std::make_unique<GeneralTriangle>(3.0, 4.0, 5.0, 30.0, 60.0, 90.0);
        t1->print();
    }
    catch (const FigureException& e) {
        std::cout << e.what() << "\n";
    }

    try {
        // Неправильный треугольник: сумма углов != 180
        auto badT = std::make_unique<GeneralTriangle>(3.0, 4.0, 5.0, 30.0, 50.0, 90.0);
        badT->print();
    }
    catch (const FigureException& e) {
        std::cout << e.what() << "\n";
    }

    try {
        auto rt = std::make_unique<RightTriangle>(3.0, 4.0, 5.0, 30.0, 60.0);
        rt->print();
    }
    catch (const FigureException& e) {
        std::cout << e.what() << "\n";
    }

    try {
        // Прямоугольный с неправильными углами
        auto badRt = std::make_unique<RightTriangle>(3.0, 4.0, 5.0, 20.0, 70.0);
        badRt->print();
    }
    catch (const FigureException& e) {
        std::cout << e.what() << "\n";
    }

    try {
        auto iso = std::make_unique<IsoscelesTriangle>(5.0, 4.0, 5.0, 50.0, 80.0, 50.0);
        iso->print();
    }
    catch (const FigureException& e) {
        std::cout << e.what() << "\n";
    }

    try {
        // Равнобедренный с неправильными сторонами/углами
        auto badIso = std::make_unique<IsoscelesTriangle>(5.0, 4.0, 6.0, 50.0, 80.0, 50.0);
        badIso->print();
    }
    catch (const FigureException& e) {
        std::cout << e.what() << "\n";
    }

    try {
        auto eq = std::make_unique<EquilateralTriangle>(4.0);
        eq->print();
    }
    catch (const FigureException& e) {
        std::cout << e.what() << "\n";
    }

    try {
        auto rect = std::make_unique<Rectangle>(5.0, 10.0);
        rect->print();
    }
    catch (const FigureException& e) {
        std::cout << e.what() << "\n";
    }

    try {
        auto sq = std::make_unique<Square>(7.0);
        sq->print();
    }
    catch (const FigureException& e) {
        std::cout << e.what() << "\n";
    }

    return 0;
}