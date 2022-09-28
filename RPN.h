//
// Created by Johnathan Hwang on 9/28/22.
//

#ifndef DOUBLELINKEDLIST_RPN_H
#define DOUBLELINKEDLIST_RPN_H
#include "Stack.h"
#include "Queue.h"

template<class T>
class RPN {
private:
    Queue<T> _queue;
    int lhs, rhs;



public:
    //stoi = string to int
    //isDigit check if int
    RPN();
    bool isNumber(std::string index);
    double doOperation(int lhs, int rhs, char operation);
    double calculate(Queue<T>& _queue);



};


#include "RPN.cpp"

#endif //DOUBLELINKEDLIST_RPN_H
