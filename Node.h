//
// Created by Johnathan Hwang on 9/17/22.
//

#ifndef DOUBLELINKEDLIST_NODE_H
#define DOUBLELINKEDLIST_NODE_H

#endif //DOUBLELINKEDLIST_NODE_H

template <class T>
struct Node{
    T data;
    Node<T>* next;
    Node<T>* prev;
};