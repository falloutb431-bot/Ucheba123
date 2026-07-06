#pragma once
#include <string>

class Figure {
protected:
    std::string name_;
    int sidesCount_;
    double anglesSum_;

    static constexpr double kEpsilon = 1e-6;

protected:
    Figure(const std::string& name, int sides, double anglesSum)
        : name_(name), sidesCount_(sides), anglesSum_(anglesSum) {
    }

public:
    virtual ~Figure() = default;

    const std::string& getName() const { return name_; }
    int getSidesCount() const { return sidesCount_; }
    double getAnglesSum() const { return anglesSum_; }

    virtual void print() const = 0;
};