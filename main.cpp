/*
 * COSC 2436
 * Stacks Assignment
 * Do not modify this comment
 * 
 * You may modify this file ONLY where indicated below
 */

#include "main.h"

int main() {

    //rand seed
    srand(time(NULL));


    // making 5 - 25 test cases
    int number_test_cases = rand() % (TEST_CASE_BASE + 1) + TEST_CASE_OFFSET;

    //making test case parallel arrays to hold test data
    int ids[number_test_cases];
    char *data[number_test_cases];
    for (int i = 0; i < number_test_cases; i++) {
        data[i] = new char[BUFFER_SIZE];
    }

    //filling arrays with test case data
    cout << "Making " << number_test_cases << " test cases..." << endl;
    make_test_cases(ids, data, number_test_cases);
    cout << "Test cases done" << endl << endl;
    display_test_cases(ids, data, number_test_cases);

    
    // declare the stack
    Stack stack;

    cout<<"testing isEmpty() on empty stack:\n"<<endl;
    if(stack.isEmpty()){
        cout << "stack is empty" << endl;
    } else {
        cout << "stack is NOT empty" << endl;
    }
    cout << endl;
    cout << endl;
    cout<<"testing filling the stack and overflow with test cases and test data, the stack should be in a state of overflow after 10 pushes:\n"<<endl;
    for(int i=0; i<number_test_cases; i++){
        if(stack.push(ids[i],data[i])){
            cout << "pushed: " << i+1 << endl;
        } else {
            cout << "overflow " << i+1 << endl;
        }
    }
    //hardcoding 5 cases of input to ensure stack is filled in worst case that 5 test cases are generated
    if(stack.push(1,"xyz")){
        cout << "pushed: " << number_test_cases+1 << endl;
    } else {
        cout << "overflow " << number_test_cases+1<< endl;
    }
    if(stack.push(2,"xxyyzz")){
        cout << "pushed: " << number_test_cases+2 << endl;
    } else {
        cout << "overflow " << number_test_cases+2<< endl;
    }
    if(stack.push(3,"xxxyyyzzz")){
        cout << "pushed: " << number_test_cases+3 << endl;
    } else {
        cout << "overflow " << number_test_cases+3<< endl;
    }if(stack.push(4,"xxxxyyyyzzzz")){
        cout << "pushed: " << number_test_cases+4 << endl;
    } else {
        cout << "overflow " << number_test_cases+4<< endl;
    }if(stack.push(5,"xxxxxyyyyyzzzzz")){
        cout << "pushed: " << number_test_cases+5 << endl;
    } else {
        cout << "overflow " << number_test_cases+5<< endl;
    }
    
    cout << endl;
    cout<<"testing isEmpty() on full stack:\n"<<endl;
    if(stack.isEmpty()){
        cout << "stack is empty" << endl;
    } else {
        cout << "stack is NOT empty" << endl;
    }
    cout << endl;
    
    
    // declaring empty data struct that will store peek and pop values by reference

    Data *inputStruct = new Data();

    cout<<"testing peeking before and after a pop:\n"<<endl;
    if(stack.peek(inputStruct)){
        cout << "peeked \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information <<endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;


    cout<<"testing the pop function with a full stack:\n"<<endl;
    if(stack.pop(inputStruct)){
        cout << "popped \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information << endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;
    cout<<"peeking after a pop:\n"<<endl;
    if(stack.peek(inputStruct)){
        cout << "peeked \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information <<endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;
    if(stack.pop(inputStruct)){
        cout << "popped \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information << endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;
    cout<<"popping elements till the stack is empty, 8 remaining:\n"<<endl;
    if(stack.pop(inputStruct)){
        cout << "popped \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information << endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;
    if(stack.pop(inputStruct)){
        cout << "popped \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information << endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;
    if(stack.pop(inputStruct)){
        cout << "popped \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information << endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;
    if(stack.pop(inputStruct)){
        cout << "popped \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information << endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;
    if(stack.peek(inputStruct)){
        cout << "peeked \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information << endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;
    if(stack.pop(inputStruct)){
        cout << "popped \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information << endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;
    if(stack.pop(inputStruct)){
        cout << "popped \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information << endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;
    cout<<"testing isEmpty randomly while popping, should still be Not empty:\n"<<endl;
    if(stack.isEmpty()){
        cout << "stack is empty" << endl;
    } else {
        cout << "stack is NOT empty" << endl;
    }
    cout << endl;
    cout << endl;
    if(stack.pop(inputStruct)){
        cout << "popped \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information << endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;
    if(stack.pop(inputStruct)){
        cout << "popped \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information << endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;
    cout<<"popping an empty stack, should return underflow:\n"<<endl;
    if(stack.pop(inputStruct)){
        cout << "popped \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information << endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;
    cout<<"peeking an empty stack should return underflow:\n"<<endl;
    if(stack.peek(inputStruct)){
        cout << "peeked \nID:" << inputStruct->id<<"\nInformation: " << inputStruct->information << endl;
    } else {
        cout << "underflow" << endl;
    }
    cout << endl;
    

    return 0;
}
