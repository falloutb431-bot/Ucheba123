#pragma once
#include <stdexcept>
#include <string>

class FigureException : public std::domain_error {
public:
    explicit FigureException(const std::string& message);
};