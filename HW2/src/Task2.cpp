//
// Created by Dmitry Morozov on 21/8/22.
//
#include <cmath>
#include <string>

#include "Task2.hpp"


//Figure: Abstract class
Figure::Figure (const std::string &name, double dimension) : name_ (name), dimension_ (dimension) {}

bool Figure::operator< (const Figure &rhs) const {
    return this->getArea () < rhs.getArea ();
}

std::string Figure::getName () const {
    return name_;
}

//EquilateralTriangle: Concrete class
Square::Square (double dimension) : Figure ("Square", dimension) {}

double Square::getArea () const {
    return dimension_ * dimension_;
}

EquilateralTriangle::EquilateralTriangle (double dimension) : Figure ("EquilateralTriangle", dimension) {}

double EquilateralTriangle::getArea () const {
    return (sqrt (3) / 4) * pow (dimension_, 2);
}

//Circle: Concrete class
Circle::Circle (double dimension) : Figure ("Circle", dimension) {}

double Circle::getArea () const {
    return M_PI * dimension_ * dimension_;
}

