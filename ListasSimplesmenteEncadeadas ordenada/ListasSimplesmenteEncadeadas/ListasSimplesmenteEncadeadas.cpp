#include "listaEncadeada.h"

int main()
{
    listaEncadeada *numeros = new listaEncadeada();
    int v[]{ 8,2,4,3,5,6,1,10,7,9 };
    while (numeros->tamanhoLista != 10) {
        if (numeros->inicio == NULL) {
            numeros->addItemAtBeginning(v[0]);
        }
        else {
            node* aux = numeros->inicio;
            for (int i = 1; i < 10; i++) {
                for (int j = 1; j < 10; j++) {
                    if (v[i] < aux->dado) {
                        numeros->addItemAtPos(v[i], j);
                        aux = numeros->inicio;
                        break;
                    }
                    else {
                        if (v[i] > numeros->fim->dado) {
                            numeros->addItemAEnd(v[i]);
                            aux = numeros->inicio;
                            break;
                        }
                        else {
                            aux = aux->next;
                        }
                    }
                }
            }
            aux = NULL;
            delete aux;
        }
    }
    numeros->printList();
}


