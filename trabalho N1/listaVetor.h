#include <iostream>
#include <string>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
using namespace std;
class listaVetor
{
public:
    int* ptrlista;
    int tamanhoLista;
    int maximo;
    int ultimo;
    listaVetor(int x);
    ~listaVetor();
    bool listaCheia();
    bool listaVazia();
    int getTamanhoLista();
    void addItemAtPos(int item, int posicao);
    void removeItemAtPos(int posicao);
    void addItemAtBeginning(int item);
    void removeItemAtBeginning();
    void removeItem(int item);
    void printList();
    void addItemAtEnd(int item);
    void removeItemAtEnd();
    void getMinMax();
    void esvaziaLista();
    void findItem(int item);
    void modifyItem(int posicao, int item);
    void randpreencher();
};

