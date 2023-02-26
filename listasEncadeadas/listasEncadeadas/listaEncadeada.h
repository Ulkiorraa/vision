#pragma once
#include "node.h"
#include <iostream>
using namespace std;

class listaEncadeada
{
public:
    //ATRIBUTOS
    node* inicio;
    node* fim;
    int tamanhoLista;

    //METODOS
    listaEncadeada();
    ~listaEncadeada();
    bool listaVazia();
    void addItemAEnd(int item);
    void addItemAtBeginning(int item);
    void addItemAtPos(int item, int posicao);
    int getTamanhoLista();
    void removeItemAtBeginning();
    void removeItemAtEnd();
    void removeItemAtPos(int posicao);
    void removeItem(int item);
    void printList();
    void getMinMax();
    void esvaziaLista();
    void findItem(int item);
    void modifyItem(int posicao, int item);

};

