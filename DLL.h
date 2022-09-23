//
// Created by Johnathan Hwang on 9/17/22.
//

#ifndef DOUBLELINKEDLIST_DLL_H
#define DOUBLELINKEDLIST_DLL_H

#include <iostream>
#include <cassert>
#include "Node.h"

template <class T>
class DLL {

private:
    Node<T>* head = nullptr;
    Node<T>* tail = nullptr;
    void addFirstNode(T data);
public:
    DLL();                   //Default Constructor
    DLL(const DLL<T> &list); //copy constructor
    ~DLL();                  //Destructor
    void operator =(const DLL<T>& list);
    void operator +=(T item);

    Node<T>* createNewNode(T data);
    void pushFront(T data);
    void pushBack(T data);
    void insertAfter(T item, T targetItem);
    void insertBefore(T item, T targetItem);
    bool checkList();
    Node<T>* headPtr ()const;
    Node<T>* tailPtr()const;

    int checkListSize();
    T& getHead();
    T& getTail();
    T& seek (T item);

    Node<T>* search(T data);
    void popFront();
    void popBack();
    void remove(T target);

    template<class S>
    friend std::ostream& operator <<(std::ostream& out, const DLL<S>& list);
};
#include "DLL.cpp"
#endif //DOUBLELINKEDLIST_DLL_H

