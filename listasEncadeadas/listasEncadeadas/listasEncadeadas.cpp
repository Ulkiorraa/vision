#include "listaEncadeada.h"

int main()
{
    listaEncadeada *frutas = new listaEncadeada();

    frutas->addItemAtBeginning(50);
    frutas->addItemAtBeginning(10);
    frutas->printList();
    return 0;
}

