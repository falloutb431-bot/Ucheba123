
cmake_minimum_required(VERSION 3.10)

project(geometry_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(geometry_app
    main.cpp
    ShapeException.cpp
    Triangle.cpp
    GeneralTriangle.cpp
    RightTriangle.cpp
    IsoscelesTriangle.cpp
    EquilateralTriangle.cpp
    Quadrilateral.cpp
    Rectangle.cpp
    Square.cpp
)