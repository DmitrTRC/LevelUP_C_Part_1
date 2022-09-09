//
// Created by Dmitry Morozov on 21/8/22.
//

#include "Task2.hpp"

#include <cmath>
#include <utility>


/**
 * @brief Constructor for Figure
 * @param name
 * @param dimension
 */
Figure::Figure (std::string name, double dimension) : name_ (std::move (name)), dimension_ (dimension) {}

/**
 * @brief Getter for name
 * @return name
 */
std::string Figure::getName () const {
    return name_;
}

/**
 * @brief Constructor for Square
 * @param dimension
 */
Square::Square (double dimension) : Figure ("Square", dimension) {}

double Square::getArea () const {
    return dimension_ * dimension_;
}

/**
 * @brief Constructor for EquilateralTriangle
 * @param dimension
 */
EquilateralTriangle::EquilateralTriangle (double dimension) : Figure ("EquilateralTriangle", dimension) {}

double EquilateralTriangle::getArea () const {
    return (sqrt (3) / 4) * pow (dimension_, 2);
}

/**
 * @brief Constructor for Circle
 * @param dimension
 */
Circle::Circle (double dimension) : Figure ("Circle", dimension) {}

double Circle::getArea () const {
    return M_PI * dimension_ * dimension_;
}

