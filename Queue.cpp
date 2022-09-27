//
// Created by Johnathan Hwang on 9/20/22.
//

#ifndef DOUBLELINKEDLIST_QUEUE_CPP
#define DOUBLELINKEDLIST_QUEUE_CPP
#include "Queue.h"

template<class T>
Queue<T>::Queue() {

}

template<class T>
Queue<T>::Queue(const Queue<T> &_list) {

}

template<class T>
Queue<T>::~Queue() {

}

template<class T>
void Queue<T>::operator=(const Queue<T> &_list) {

}

template<class T>
void Queue<T>::pop() {
    _list.popFront();
}

template<class T>
bool Queue<T>::empty() {
    return _list.checkList();
}

template<class T>
void Queue<T>::push(T item) {
    _list.pushFront(item);
}

template<class T>
void Queue<T>::size() {
    return _list.checkListSize();
}

template<class T>
void Queue<T>::back() {
    return _list.getTail();
}

template<class T>
T &Queue<T>::Top() {
    return _list.getHead();
}

template<class T>
T &Queue<T>::Seek(T item) {
    return _list.seek(item);
}




#endif