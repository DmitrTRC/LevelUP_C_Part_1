//
// Created by Dmitry Morozov on 9/9/22.
//

#ifndef LEVELUP_C_PARTI_DEV_C_STACK_HPP
#define LEVELUP_C_PARTI_DEV_C_STACK_HPP

/**
 * @file Stack class simple implementation
 */
class C_stack {
public:
    C_stack ();

    ~C_stack ();

    void push (char &);

    void pop ();

    [[nodiscard]] char top () const;

    [[nodiscard]] bool empty () const;

private:
    struct Node {
        char value;
        Node *next;
    };

    Node *head;
};


#endif //LEVELUP_C_PARTI_DEV_C_STACK_HPP
