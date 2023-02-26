#include "deque.h"

int main()
{
    deque* frutas = new deque();

    frutas->addItemAtBeginning(50);
    frutas->addItemAtBeginning(800);
    frutas->addItemAtBeginning(60);
    frutas->addItemAtBeginning(100);
    frutas->addItemAtEnd(200);
    frutas->addItemAtEnd(300);
    frutas->addItemAtEnd(500);
    frutas->addItemAtEnd(10);
    frutas->findItem(200);
    frutas->getMinMax();
    frutas->printDeque();
    frutas->modifyItem(5, 600);
    frutas->addItemAtPos(123, 3);
    frutas->printDeque();
    frutas->emptyDeque();
    frutas->printDeque();
    return 0;
}
