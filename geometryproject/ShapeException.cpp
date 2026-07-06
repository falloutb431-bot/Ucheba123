#include "ShapeException.h"

FigureException::FigureException(const std::string& message)
    : std::domain_error(message) {}