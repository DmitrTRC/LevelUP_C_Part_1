//
// Created by Dmitry Morozov on 21/8/22.
//

#include <iostream>
#include <vector>

#include "Task1.hpp"
#include "Task2.hpp"


auto getMaxAreaFigure (const std::vector<Figure *> &figures) {

    return *std::max_element (figures.begin (), figures.end (),
                              [] (const Figure *lhs, const Figure *rhs) {
                                  return lhs->getArea () < rhs->getArea ();
                              });
};

void printFigures (const std::vector<Figure *> &figures) {

    auto sortedFigures = figures;
    std::sort (sortedFigures.begin (), sortedFigures.end (),
               [] (const Figure *lhs, const Figure *rhs) {
                   return lhs->getArea () > rhs->getArea ();
               });
    for (const auto &figure: sortedFigures) {
        std::cout << figure->getName () << ": " << figure->getArea () << std::endl;
    }
}

int main (int argc, char **argv) {


    std::cout << "HOME WORK 2\n\nTask 1" << std::endl;

    std::cout << "Enter x: ";

    double x;

    std::cin >> x;

    std::cout << "Equation: " << getEquation (x) << std::endl;

    std::cout << "HOME WORK 2\n\nTask 2" << std::endl;

    std::vector<Figure *> figures;

    std::cout << "Enter Circle radius R : ";
    double r;
    std::cin >> r;
    figures.push_back (new Circle (r));

    std::cout << "Enter Triangle side a : ";
    double a;
    std::cin >> a;
    figures.push_back (new EquilateralTriangle (a));

    std::cout << "Enter Square side d : ";
    double d;
    std::cin >> d;
    figures.push_back (new Square (d));

    auto maxAreaFigure = getMaxAreaFigure (figures);

    std::cout << "Max area figure: " << maxAreaFigure->getName () << " with area " << maxAreaFigure->getArea ()
              << std::endl << std::endl;


    printFigures (figures);

    return 0;
}

