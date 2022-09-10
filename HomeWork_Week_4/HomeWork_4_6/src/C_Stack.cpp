//
// Created by Dmitry Morozov on 9/9/22.
//

#include "C_Stack.hpp"


/**
 * Constructor
 * @param
 * @return
 */
C_stack::C_stack () : head (nullptr) {};

/**
 * Destructor
 * @param
 * @return
 */
C_stack::~C_stack () {
    while (!isEmpty ()) {
        pop ();
    }
}

/**
 * Pushes the element to the stack
 * @param value the value to push
 * @return
 */
void C_stack::push (char value) {
    Node *newNode = new Node;
    newNode->value = value;
    newNode->next = head;
    head = newNode;
}

/**
 * Pops the element from the stack
 * @param
 * @return
 */
void C_stack::pop () {
    if (isEmpty ()) {
        return;
    }

    Node *temp = head;
    head = head->next;
    delete temp;
}

/**
 * Returns the top element of the stack
 * @param
 * @return char element
 */
char C_stack::top () const {
    return head->value;
}

/**
 * Checks if the stack is empty
 * @param
 * @return bool
 */
bool C_stack::isEmpty () const {
    return head == nullptr;
}


