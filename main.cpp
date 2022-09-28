#include <iostream>
#include "DLL.h"
#include "Stack.h"
int main() {

//    DLL<int> test1,test2,test3;
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
//    std::cout<<test2;
    //std::cout << test1;

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

    DLL<int> test1,test2,test3;
    test1.pushBack(2);
    test1.pushBack(3);
    test1.pushFront(1);
    //test1.insertBefore(6,2);
    //test1.insertAfter(5,2);
    //test1.checkList();
    //test1.popFront();
    //test1.popBack();
    //test1.remove(3);
    test2 = test1;
    test2 += 5;
    std::cout<<test2;
    //std::cout << test1;

    //std::cout<<test1.getHead()<<std::endl;
    //std::cout<<test1.getTail()<<std::endl;
    //test1.checkListSize();
    //test1.search(2);
    return 0;
}
