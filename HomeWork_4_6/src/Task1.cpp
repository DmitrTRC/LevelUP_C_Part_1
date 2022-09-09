//
// Created by Dmitry Morozov on 5/9/22.
//


#include "Task1.hpp"

#include <set>
#include <map>
#include <stack>


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
    std::stack<char> bracketsStack;

    for (char c: str) {
        auto it = bracketsMap.find (c);
        if (it != bracketsMap.end ()) {
            bracketsStack.push (it->first);
        } else {
            if (bracketsStack.empty ()) {
                return false;
            }

            char openBracket = bracketsStack.top ();
            bracketsStack.pop ();

            if (bracketsMap[openBracket] != c) {
                return false;
            }
        }

    }
    return bracketsStack.empty ();
}
