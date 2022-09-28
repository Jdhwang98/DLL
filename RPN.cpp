//
// Created by Johnathan Hwang on 9/28/22.
//
#ifndef DOUBLELINKEDLIST_RPN_CPP
#define DOUBLELINKEDLIST_RPN_CPP
#include "RPN.h"


template<class T>
RPN<T>::RPN() {

}

template<class T>
bool RPN<T>::isNumber(std::string index) {
    double num = std::stod(index); //convert string to double
    if(isdigit(num)){               //return true if number
        return true;
    }
    else
        return false;
}

template<class T>
double RPN<T>::doOperation(int lhs, int rhs, char operation) {

    switch (operation) {
        case '+':
            return lhs + rhs;
        case '-':
            return lhs - rhs;
        case '*':
            return lhs*rhs;
        case '/':
            return lhs/rhs;
        default:
            return 0;
    }
}

template<class T>
double RPN<T>::calculate(Queue<T>& _queue) {
    Stack<T> _stack;

    for(auto i: _queue){        //loop based on queue size and access values
        std::string index = i;  //keep track of value at position
        if(isNumber(index)){    //check if string is number
            _stack.push(index);//push string to stack
        }
        else{
            char operation = index[0]; //checking operation at index of queue
            double rhs = std::stod(_stack.top()); //converting string to num from stack
            _stack.pop();
            double lhs = std::stod(_stack.top()); //converting string to num from stack
            _stack.pop();
            double solution = doOperation(lhs,rhs,operation); //add values with operation
            _stack.push(std::to_string(solution));  //push new value to stack
        }
    }
    return std::stod(_stack.top());
}

#endif