//
// Created by Dmitry Morozov on 22/8/22.
//

#ifndef LEVELUP_C_PARTI_FEATURE_HW2_TASK2_HPP
#define LEVELUP_C_PARTI_FEATURE_HW2_TASK2_HPP

#include <string>


class Figure {
public:
    Figure (std::string);

    virtual double getArea () = 0;

    bool operator< (const Figure &) const;

private:
    std::string name_;
};

class EquilateralTriangle : public Figure {
public:
    EquilateralTriangle (double);

    double getArea () override;
};

class Square : public Figure {
public:
    Square (double);

    double getArea () override;
};

class Circle : public Figure {
public:
    Circle (double);

    double getArea () override;
};


#endif //LEVELUP_C_PARTI_FEATURE_HW2_TASK2_HPP
