#include <iostream>
using namespace std;
class FilaCircular {

public:
    int* ptrFila;
    int primeiro;
    int ultimo;
    int tamanho;
    int maximo;
    FilaCircular(int n);
    ~FilaCircular();
    bool vazia();
    int posicaoElemento(int item);
    int Primeiro();   //usar o atributo primeiro
    int Ultimo();      //usar o atributo ultimo
    void remover();  //usar o primeiro
    void apagarFila();
    void inserir(int item); //usar o ultimo
    void imprimir();
};
