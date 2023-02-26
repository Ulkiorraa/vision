#include "Fila.h"

FilaCircular::FilaCircular(int n){
	ptrFila = new int[n];
	maximo = n;
	tamanho = 0;
	primeiro = 0;
	ultimo = 0;
}

FilaCircular::~FilaCircular()
{
	delete[]ptrFila;
	maximo = 0;
	tamanho = 0;
	primeiro = 0;
	ultimo = 0;
}

bool FilaCircular::vazia()
{
	return tamanho == 0;
}

int FilaCircular::posicaoElemento(int item)
{	
	if (!vazia())
	{
		int aux = primeiro;
		do {
			if (ptrFila[aux] == item)
				return aux;
			aux = (aux + 1) % maximo;
		} while (aux != (ultimo % maximo));
		if ((ptrFila[aux] == item)) {
			return aux;
		}
		else {
			return NULL;
		}
	}
}

int FilaCircular::Primeiro(){
	return ptrFila[primeiro];
}

int FilaCircular::Ultimo()
{
	return ptrFila[ultimo];
}

void FilaCircular::remover(){
	if (vazia())
	{
		cout << "Fila vazia." << endl;
	}
	else
	{
		ptrFila[primeiro] = NULL;
		primeiro++
	}
}

void FilaCircular::apagarFila(){
	for (int i = 0; i < tamanho; i++) {
		ptrFila[i] = 0;
	}
		tamanho = -1;
}

void FilaCircular::inserir(int item){
	if ((tamanho < maximo - 1) && (item > 0) && (maximo > 0)) {
		tamanho++;
		if (tamanho == 0) {
			primeiro = 0;
			ultimo = 0;
		}
		else {
			if (tamanho >= 1 && tamanho < maximo){
				ultimo = tamanho;
			}
			else {
				ultimo = 0;
			}
		}
		if (primeiro == 0) {
			ptrFila[tamanho] = item;
		}
	}else if (tamanho == maximo - 1)
		cout << "Fila cheia!" << endl;
}

void FilaCircular::imprimir()
{
	
}
