//
// Created by Dmitry Morozov on 9/9/22.
//

#include "shared/C_Stack.hpp"

#include <stdexcept>


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
        throw std::runtime_error ("Stack is empty");
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
    if (isEmpty ()) {
        throw std::runtime_error ("Stack is empty");
    }
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

/**
 * It returns the size of the stack.
 *
 * @return The size of the stack.
 */
int C_stack::size () const {
    int size = 0;
    Node *temp = head;
    while (temp != nullptr) {
        size++;
        temp = temp->next;
    }

    return size;
}


