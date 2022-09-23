//
// Created by Johnathan Hwang on 9/20/22.
//
#ifndef DOUBLELINKEDLIST_STACK_CPP
#define DOUBLELINKEDLIST_STACK_CPP
#include "Stack.h"

template<class T>
Stack<T>::Stack() {

}

template<class T>
Stack<T>::Stack(const Stack<T> &list) {
    *this = list;
}

template<class T>
Stack<T>::~Stack() {
//    Node<T>* walker = _list.tailPtr();
//    while(walker != nullptr){
//        _list.popBack();
//        walker = walker->prev;
//    }
}

template<class T>
void Stack<T>::operator=(const Stack<T> &_list) {
    this-> ~Stack();
    Node<T>* walker = _list.list.tailPtr();
    while(walker != nullptr){
        _list.pushBack(walker->data);
        walker = walker->prev;
    }
}

template<class T>
void Stack<T>::pop() {
    _list.popBack();
}

template<class T>
void Stack<T>::push(T item) {
    _list.pushBack(item);
}

template<class T>
bool Stack<T>::empty() {
    return _list.checkList();
}

template<class T>
int Stack<T>::size() {
    return _list.checkListSize();
}

template<class T>
T &Stack<T>::top() {
    return _list.getTail();
}

template<class T>
T &Stack<T>::seek(T data) {
    return _list.seek(data);
}

template<class S>
std::ostream &operator<<(std::ostream &out, const Stack<S> &_list)
{
    Node<S>* walker = _list._list.tailPtr();
    while(walker != nullptr)
    {
        out << walker->data << " ";
        walker = walker->prev;
    }
    out << std::endl;
    return out;
}

#endif