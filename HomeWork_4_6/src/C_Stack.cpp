//
// Created by Dmitry Morozov on 9/9/22.
//

#include "C_Stack.hpp"


C_stack::C_stack () : head (nullptr) {};

C_stack::~C_stack () {
    while (!empty ()) {
        pop ();
    }
}

void C_stack::push (char &value) {
    Node *newNode = new Node;
    newNode->value = value;
    newNode->next = head;
    head = newNode;
}

void C_stack::pop () {
    if (empty ()) {
        return;
    }

    Node *temp = head;
    head = head->next;
    delete temp;
}

char C_stack::top () const {
    return head->value;
}

bool C_stack::empty () const {
    return head == nullptr;
}


