#include "node.h"
#include <iostream>
using namespace std;
class deque
{
    public:

        node* inicio;
        node* fim;
        int sizeDeque;

        deque();
        ~deque();
        bool isEmpty();   // testa se o deque    
        int getsizeDeque();
        void addItemAtBeginning(int item);
        void removeItemAtBeginning();
        void addItemAtEnd(int item);
        void removeItemAtEnd();
        void printDeque();
        void getMinMax();
        void emptyDeque();       // esvaziar o deque                         
        void findItem(int item);
        void modifyItem(int posicao, int item);
        void addItemAtPos(int item, int posicao);
};

