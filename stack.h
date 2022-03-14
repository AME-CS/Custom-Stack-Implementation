/*
 * This is a program that will setup a simple ADT, specifically an int stack.
 * Note the header structure and files.
 * The only thing included in stack.cpp is this stack.h file
 * stack.h contains all directives for stack.cpp
 */
/* 
 * File:   stack.h
 * Author: Ahmed Eid
 */
 

#ifndef STACK_H
#define STACK_H

/*
 * notice there are no other includes here because they are not needed.
 * if you do need other things included, they would go here
 */
#include "data.h"
#define STACK_SIZE 10 // do not modify this define

class Stack {

public:

    Stack();

    ~Stack();

    bool push(int, string);

    bool pop(Data*);

    bool peek(Data*);

    bool isEmpty();

private:

    

    // these are the only attributes you need. do not modify them or add any
    int top; // this is your top index
    Data *stack[STACK_SIZE]; // this is your stack, it is an array of Data pointers
};

#endif //STACK_H