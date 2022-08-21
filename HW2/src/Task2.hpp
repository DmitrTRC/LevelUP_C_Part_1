//
// Created by Dmitry Morozov on 22/8/22.
//

#ifndef LEVELUP_C_PARTI_FEATURE_HW2_TASK2_HPP
#define LEVELUP_C_PARTI_FEATURE_HW2_TASK2_HPP

#include <string>


class Figure {
public:
    Figure (const std::string &, double);

    [[nodiscard]] virtual double getArea () const = 0;

    bool operator< (const Figure &) const;

    [[nodiscard]] std::string getName () const;

protected:
    std::string name_;
    double dimension_;
};

class EquilateralTriangle : public Figure {
public:
    explicit EquilateralTriangle (double);

    [[nodiscard]] double getArea () const override;
};

class Square : public Figure {
public:
    explicit Square (double);

    [[nodiscard]] double getArea ()const override;
};

class Circle : public Figure {
public:
    explicit Circle (double);

    [[nodiscard]] double getArea () const override;
};


#endif //LEVELUP_C_PARTI_FEATURE_HW2_TASK2_HPP
