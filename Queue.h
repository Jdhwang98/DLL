//
// Created by Johnathan Hwang on 9/20/22.
//

#ifndef DOUBLELINKEDLIST_QUEUE_H
#define DOUBLELINKEDLIST_QUEUE_H
#include "DLL.h"

template<class T>
class Queue {
private:
    DLL<T> _list;

public:
    Queue();
    Queue(const Queue<T>& _list);
    ~Queue();

    void operator =(const Queue<T>& _list);

    void pop();
    bool empty();
    void push(T item);
    void size();
    void back();

    T& Top();
    T& Seek(T item);


    template<class S>
    friend std::ostream& operator <<(std::ostream& out, const Queue<S>& _list);

};

#include "Queue.cpp"
#endif //DOUBLELINKEDLIST_QUEUE_H
