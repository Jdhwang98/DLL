//
// Created by Johnathan Hwang on 9/20/22.
//

#ifndef DOUBLELINKEDLIST_STACK_H
#define DOUBLELINKEDLIST_STACK_H
#include"DLL.h"

template <class T>
class Stack {

private:
    DLL<T> _list;

public:
    Stack();
    Stack(const Stack<T>& list);//copy constuctor
    ~Stack();//destructor

    void operator =(const Stack<T>& _list); //assignment opperator

    void print();
    void pop();
    void push(T item);
    bool empty();
    int size();
    T& top();
    T& seek(T data);
    template<class S>
    friend std::ostream& operator <<(std::ostream& out, const Stack<S>& _list);
};

#include "Stack.cpp"
#endif //DOUBLELINKEDLIST_STACK_H
