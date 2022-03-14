/*
 * This is a program that will setup a simple ADT, specifically an int stack.
 * Note the header structure and files.
 * The only thing included here is stack.cpp
 * stack.cpp contains all other directives 
 */
/* 
 * File:   stack.cpp
 * Author: Ahmed Eid
 */

// each cpp includes ONLY it's header directly!
#include "stack.h"

// constructor
Stack::Stack(){
    this->top = -1;
}

// destructor
Stack::~Stack(){
}

bool Stack::pop(Data* data){
    bool success=true;
    if(top == -1){
        data->id = -1;
        data->information = "";
        success = false;
    } else {
        *data = *stack[top];
        delete stack[top];
        top--;
    }
    return success;
}
bool Stack::push(int id, string information){
    bool success=false;
    //input validation
    if(top<(STACK_SIZE - 1) && id>0 && information!= "")
    {
        Data *myData = new Data;
        myData->id=id;
        myData->information=information;
        top++;
        stack[top] = myData; 
        success = true;
    }
    return success;
}
bool Stack::peek(Data* data){
    bool success=true;
    if(top == -1){
        data->id = -1;
        data->information = "";
        success = false;
    }
    else {
        *data = *stack[top];
    }
    return success;
}
bool Stack::isEmpty(){
    return top == -1;
}