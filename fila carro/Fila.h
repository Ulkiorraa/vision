#include <iostream>
using namespace std;
class Fila{
public:
    int* ptrFila;
    int tamanho;
    int maximo;
    Fila(int n);
    ~Fila();
    bool vazia();
    void posicaoElemento(int item);
    int inicio();
    void remover();
    void apagarFila();
    void inserir(int item);
    void imprimir();
};

