#include <iostream>
#include "DLL.h"
#include "Stack.h"
#include "Queue.h"
int main() {

//    DLL<int> test1;
//    test1.pushBack(2);
//    test1.pushBack(3);
//    test1.pushFront(1);
    //test1.insertBefore(6,2);
    //test1.insertAfter(5,2);
    //test1.checkList();
    //test1.popFront();
    //test1.popBack();
    //test1.remove(3);
//    test2 = test1;
//    test2 += 5;
//    std::cout<<test1<<std::endl;
//    for(int i = 0; i < 100 ; i++)
//    {
//        test1.pushBack(i);
//    }
//
//    std::cout << test1;

    //std::cout<<test1.getHead()<<std::endl;
    //std::cout<<test1.getTail()<<std::endl;
    //test1.checkListSize();
    //test1.search(2);


//    Stack<int> stack1,stack2,stack3;
//    stack1.push(1);
//    stack1.push(2);
//    stack1.push(3);
//    stack1.push(4);
//    stack1.push(5);
//    stack1.push(6);
//    stack1.push(2);
//    stack1.seek(2);
    //std::cout  << stack1.top()<< std::endl;

//   std::cout << stack1;

    Stack<int> myStack;
    Queue<int> myQueue;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    myStack.push(4);
    myStack.push(5);

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    myQueue.push(4);
    myQueue.push(5);
    std::cout << "this is a Stack: ";
    myStack.print();
    std::cout<<std::endl;
    std::cout << "this is a Queue: ";
    myQueue.print();
    std::cout<<std::endl;


    myStack.pop();
    myQueue.pop();

    std::cout << "this is a Stack: ";
    myStack.print();
    std::cout<<std::endl;
    std::cout << "this is a Queue: ";
    myQueue.print();


    return 0;
}
