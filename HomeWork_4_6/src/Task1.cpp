//
// Created by Dmitry Morozov on 5/9/22.
//


#include "Task1.hpp"

#include <set>
#include <stack>


/**
 * This function checks if the brackets expression is valid
 *
 * @param str the string to check
 * @return bool
 */
bool isValidBracketsExpression (const std::string &str) {
    std::set<char> openBrackets = {'(', '[', '{', '<'};
    std::set<char> closeBrackets = {')', ']', '}', '>'};
    std::stack<char> bracketsStack;

    for (char c: str) {
        if (openBrackets.find (c) != openBrackets.end ()) {
            bracketsStack.push (c);
        } else if (closeBrackets.find (c) != closeBrackets.end ()) {
            if (bracketsStack.empty ()) {
                return false;
            }

            char openBracket = bracketsStack.top ();
            bracketsStack.pop ();

            if (openBracket == '(' && c != ')') {
                return false;
            } else if (openBracket == '[' && c != ']') {
                return false;
            } else if (openBracket == '{' && c != '}') {
                return false;
            } else if (openBracket == '<' && c != '>') {
                return false;
            }
        }
    }

    return bracketsStack.empty ();
}
