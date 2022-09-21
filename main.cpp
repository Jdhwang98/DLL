#include <iostream>
#include "DLL.h"
int main() {

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
    std::cout<<test1<<std::endl;
    std::cout<<test2;
    //std::cout << test1;

    //std::cout<<test1.getHead()<<std::endl;
    //std::cout<<test1.getTail()<<std::endl;
    //test1.checkListSize();
    //test1.search(2);

    return 0;
}
