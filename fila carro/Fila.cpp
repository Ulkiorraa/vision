#include "Fila.h"

Fila::Fila(int n){
	ptrFila = new int[n];
	maximo = n;
	tamanho = -1;
}

Fila::~Fila(){
	delete[]ptrFila;
	maximo = 0;
	tamanho = -1;
}

bool Fila::vazia(){
	if (tamanho == -1) //topo = -1, significa pilha vazia
		return true;
	else
		return false; //caso contrario, a pilha possui elementos
}

void Fila::posicaoElemento(int item)
{
	int r;
	r = 0;
	for (int i = 0;i <= tamanho;i++) {
		if (item == ptrFila[i]) {
			cout << "Posição do elemento " << item << ": " << i + 1 << endl;
			r = 1;
		}
	}
	if (r == 0) cout << "Elemento não encontrado na fila.\n";
}

int Fila::inicio()
{
	if (vazia())
	{
		return NULL;
	}
	else
	{
		return ptrFila[0];
	}
}

void Fila::remover(){
	if (vazia())
	{
		cout << "Fila vazia." << endl;
	}
	else
	{
		for (int i = 0;i <= tamanho;i++) {
			ptrFila[i] = ptrFila[i+1];
		}
		ptrFila[tamanho--];
	}
}

void Fila::apagarFila()
{
	for (int i = 0; i < tamanho; i++)
		ptrFila[i] = 0;
		tamanho = -1;
}

void Fila::inserir(int item){
	if ((tamanho < maximo -1 ) && (item > 0) && (maximo > 0))
		ptrFila[++tamanho] = item;
	else if (tamanho == maximo - 1) // Pilha cheia tamanho = 5 , vai de 0 ate 4
		cout << "Fila cheia!" << endl;
}

void Fila::imprimir()
{
	if (vazia())
	{
		cout << "Fila vazia." << endl;
	}
	else
	{
		cout << "Fila: [ ";
		for (int i = 0; i <= tamanho; i++)
			cout << ptrFila[i] << " ";
		cout << "]" << endl;
	}
}
