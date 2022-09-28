//
// Created by Johnathan Hwang on 9/17/22.
//
#ifndef DOUBLELINKEDLIST_DLL_CPP
#define DOUBLELINKEDLIST_DLL_CPP
#include "DLL.h"

template<class T>
DLL<T>::DLL() {
//can be empty
}

template<class T>
DLL<T>::DLL(const DLL<T> &list) {
    *this = list;
}

template<class T>
DLL<T>::~DLL() {
    Node<T>* walker = head;
    while(head != nullptr){
        popFront();
    }
}

template<class T>
void DLL<T>::operator=(const DLL<T> &list) {
    this-> ~DLL();
    Node<T>* walker = list.head;
    while(walker != nullptr){
        pushBack(walker->data);
        walker = walker->next;
    }
}

template<class T>
void DLL<T>::operator+=(T item) {
    pushBack(item);
}

template<class T>
Node<T> *DLL<T>::createNewNode(T data) {

    Node<T>* newNode = new Node<T>;
    newNode->next = nullptr;
    newNode->prev = nullptr;
    newNode->data = data;
    return newNode;

}

template<class T>
void DLL<T>::addFirstNode(T data) {

    Node<T>* n = createNewNode(data);
    head = n;
    tail = n;
}

template<class T>
void DLL<T>::pushFront(T data) {
    if(head == nullptr){
        addFirstNode(data);
    }
    else if(head->next == nullptr){
        Node<T>* n = createNewNode(data);
        n->next = head;
        head->prev = n;
        head = n;
    }
    else{
        Node<T>* n = createNewNode(data);
        n->next = head;
        head->prev = n;
        head = n;
    }
}

template<class T>
void DLL<T>::pushBack(T data) {
    Node<T>* walker = head;
    if(head == nullptr)
    {
        addFirstNode(data);
    }
    else
    {
        while(walker->next != nullptr)
        {
            walker = walker->next;
        }
        Node<T>* n = createNewNode(data);
        walker->next = n;
        n->prev = walker;
        walker->next = n;
        tail = n;
    }

}

template<class T>
void DLL<T>::insertAfter(T item, T targetItem) {

    Node<T>* n = createNewNode(item);
    Node<T>* temp = search(targetItem);

    if(checkList() == true){
        n->next = temp->next;
        temp->next->prev = n;
        n->prev = temp;
        temp->next = n;
    }
    else if(checkList() == false) {
        std::cout<<"List doesn't exist\n";
    }
}

template<class T>
void DLL<T>::insertBefore(T item, T targetItem) {

    Node<T>* n = createNewNode(item);
    Node<T>* temp = search(targetItem);

    if(checkList() == true){
        n->prev = temp->prev;
        temp->prev->next = n;
        n->next = temp;
        temp->prev = n;
    }
    else if(checkList() == false) {
        std::cout<<"List doesn't exist\n";
    }
}

template<class T>
bool DLL<T>::checkList() {
    if(head == nullptr){
        std::cout << "List is empty.\n";
        return false;
    }
    else{
        std::cout << "List contains nodes.\n";
        return true;
    }
}

template<class T>
T&  DLL<T>::popFront()
{
    assert(checkListSize() && "Can't pop the front of an empty list."); //List is empty
    Node<T>* temp = head;
    if(checkListSize() == 1) //Single Node
    {
        head = nullptr;
        tail = nullptr;
        return temp->data;
    }
    if(checkListSize() >= 2) //More than a single node
    {
        head = head->next;
        return temp->data;
    }
    delete temp;
}

template<class T>
T&  DLL<T>::popBack() {
    assert(checkListSize() && "Can't pop the back of an empty list."); //List is empty
    Node<T>* temp = tail;
    if(checkListSize() == 1) //Single Node
    {
        head = nullptr;
        tail = nullptr;
        return temp->data;
    }
    if(checkListSize() >= 2) //More than a single node
    {
        tail = tail->next;
        return temp->data;
    }
    delete temp;
}

template<class T>
void DLL<T>::remove(T target) {
    Node<T>* temp = search(target);
    if(temp == head){
        popFront();
    }
    else if(temp == tail){
        popBack();
    }
    else{
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }
}

template<class T>
int DLL<T>::checkListSize() {
    Node<T>* walker = head;
    int counter = 0;

    while(walker != nullptr){
        counter++;
        walker = walker->next;
    }
    //std::cout<< "List size is: "<<counter<<std::endl;
    return counter;
}

template<class T>
T &DLL<T>::getHead() {
    assert(head != nullptr);
    return head->data;
}

template<class T>
T &DLL<T>::getTail() {
    assert(tail != nullptr);
    return tail->data;
}


template<class T>
Node<T> *DLL<T>::search(T data) {
    Node<T>* walker = head;
    int counter = 1;
    while(walker != nullptr){
        if(walker->data == data){
            std::cout << "node item: " << walker-> data << " is located in node: " << counter<< std::endl;
            return walker;
        }
        walker = walker->next;
        counter++;
    }
    std::cout << "Item was not found\n";
    return walker;
}

template<class S>
std::ostream& operator <<(std::ostream& out, const DLL<S>& list){
    Node<S>* walker = list.head;
    while(walker != nullptr){
        out << walker->data << " ";
        walker = walker->next;
    }
    out << std::endl;
    return out;
}

template<class T>
Node<T> *DLL<T>::headPtr() const {
    return head;
}

template<class T>
Node<T> *DLL<T>::tailPtr() const{
    return tail;
}

template<class T>
T &DLL<T>::seek(T item) {
    Node<T>* walker = tail;
    int counter = 1;
    while(walker != nullptr){
        if(walker->data == item){
            std::cout << "node item: " << walker-> data << " is located in node: " << counter<< std::endl;
            return walker->data;
        }
        walker = walker->prev;
        counter++;
    }
    std::cout << "Item was not found\n";
    return walker->data;
}



#endif