//
// Created by Dmitry Morozov on 21/8/22.
//
#include "Task2.hpp"

#include <iostream>
#include <vector>


/**
 * @brief Function to print the area of the figures
 * @param figures Vector of figures
 * @return Maximum area
 *
 */
auto getMaxAreaFigure (const std::vector<Figure *> &figures) {

    return *std::max_element (figures.begin (), figures.end (),
                              [] (const Figure *lhs, const Figure *rhs) {
                                  return lhs->getArea () < rhs->getArea ();
                              });
};

/**
 * @brief Function to print the area of the figures
 * @param figures Vector of figures
 * @return void
 */
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

/**
 * @brief Main function
 * @return 0;
 */
int main () {

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

