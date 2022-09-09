//
// Created by Dmitry Morozov on 22/8/22.
//

#ifndef LEVELUP_C_PARTI_FEATURE_HW2_TASK2_HPP
#define LEVELUP_C_PARTI_FEATURE_HW2_TASK2_HPP

#include <string>


/**
 * @brief Abstract class for figures
 */
class Figure {
public:
    Figure (std::string, double);

    [[nodiscard]] virtual double getArea () const = 0;

    [[nodiscard]] std::string getName () const;

protected:
    std::string name_;
    double dimension_;
};

/**
 * @brief EquilateralTriangle: Concrete class
 */
class EquilateralTriangle : public Figure {
public:
    explicit EquilateralTriangle (double);

    [[nodiscard]] double getArea () const override;
};

/**
 * @brief Square: Concrete class
 */
class Square : public Figure {
public:
    explicit Square (double);

    [[nodiscard]] double getArea () const override;
};

/**
 * @brief Circle: Concrete class
 */
class Circle : public Figure {
public:
    explicit Circle (double);

    [[nodiscard]] double getArea () const override;
};


#endif //LEVELUP_C_PARTI_FEATURE_HW2_TASK2_HPP
