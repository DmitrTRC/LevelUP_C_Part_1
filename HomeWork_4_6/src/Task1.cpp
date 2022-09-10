//
// Created by Dmitry Morozov on 5/9/22.
//

#include "C_Stack.hpp"
#include "Task1.hpp"


#include <map>


/**
 * This function checks if the brackets expression is valid
 *
 * @param str the string to check
 * @return bool
 */
bool isValidBracketsExpression (const std::string &str) {
    std::map<char, char> bracketsMap = {
            {'(', ')'},
            {'[', ']'},
            {'{', '}'},
            {'<', '>'}
    };

    auto bracketsStack = new C_stack;

    for (char c: str) {
        auto it = bracketsMap.find (c);
        if (it != bracketsMap.end ()) {
            bracketsStack->push (it->first);
        } else {
            if (bracketsStack->isEmpty ()) {
                return false;
            }

            char openBracket = bracketsStack->top ();
            bracketsStack->pop ();

            if (bracketsMap[openBracket] != c) {
                return false;
            }
        }

    }
    return bracketsStack->isEmpty ();
}
