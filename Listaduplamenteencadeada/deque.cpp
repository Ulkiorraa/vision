#include "deque.h"

deque::deque()
{
	inicio = NULL;
	fim = NULL;
	sizeDeque = 0;
}

deque::~deque()
{
	inicio = NULL;
	fim = NULL;
	sizeDeque = 0;
}

bool deque::isEmpty()
{
	return inicio == NULL;
}

int deque::getsizeDeque()
{
	return sizeDeque;
}

void deque::addItemAtBeginning(int item)
{
	node* novo = new node(item, NULL, NULL);
	if (isEmpty()) {
		fim = novo;
		inicio = novo;
	}
	else {
		inicio->back = novo;
		novo->next = inicio;
		inicio = novo;
	}
	sizeDeque++;
	novo = NULL;
	delete novo;
}

void deque::removeItemAtBeginning()
{
	if (isEmpty())
		cout << "Lista Vazia!" << endl;
	else if (sizeDeque == 1)  
	{
		node* aux = inicio;
		inicio = fim = NULL;
		delete aux;
		sizeDeque--;
	}
	else
	{
		node* aux = inicio;
		inicio = inicio->next;
		inicio->back = NULL;
		aux->next = NULL;
		delete aux;
		sizeDeque--;
	}
}

void deque::addItemAtEnd(int item)
{
	node* novo = new node(item, NULL, NULL);
	if (isEmpty()) {
		fim = novo;
		inicio = novo;
	}
	else {
		novo->back = fim;
		fim->next = novo;
		fim = novo;
	}
	sizeDeque++;
	novo = NULL;
	delete novo;
}

void deque::removeItemAtEnd()
{
	if (isEmpty())
		cout << "Lista Vazia!" << endl;
	else if (sizeDeque == 1)
	{
		node* aux = inicio;
		inicio = fim = NULL;
		delete aux;
		sizeDeque--;
	}
	else
	{
		node* aux = fim;
		fim = fim->back;
		fim->next = NULL;
		aux->back = NULL;
		delete aux;
		sizeDeque--;
	}
}

void deque::printDeque()
{
	node* aux = inicio;

	cout << "Lista: [ ";

	while (aux != NULL) 
	{
		cout << aux->dado << " ";
		aux = aux->next;
	}
	cout << "]" << endl;
	cout << "Tamanho da lista: " << sizeDeque << endl;
	delete aux;
}

void deque::getMinMax()
{
	int min, max;

	if (isEmpty())
		cout << "Lista vazia. Sem min/max." << endl;
	else
	{
		min = max = inicio->dado;
		node* aux = inicio;
		while (aux != NULL)
		{
			if (aux->dado > max)
				max = aux->dado;
			if (aux->dado < min)
				min = aux->dado;
			aux = aux->next;
		}
		cout << "Valor máximo: " << max << endl;
		cout << "Valor mínimo: " << min << endl;
		delete aux;
	}
}

void deque::emptyDeque()
{
	while (!isEmpty())
		removeItemAtBeginning();
	inicio = fim = NULL;
	sizeDeque = 0;
}

void deque::findItem(int item)
{
	if (isEmpty())
		cout << "Item não encontrado. Lista vazia!" << endl;
	else
	{
		int posicao = 1; //nao existe a posicao 0 na lista. Começa com 1.
		bool encontrou = false;
		node* aux = inicio;
		while (aux != NULL)
		{
			if (aux->dado == item)
			{
				cout << "Item " << item << " encontrado na posição: " << posicao << endl;
				encontrou = true;
			}
			aux = aux->next;
			posicao++;
		}
		if (encontrou == false)
			cout << "Item " << item << " não encontrado." << endl;
	}
}

void deque::modifyItem(int posicao, int item)
{
	if (isEmpty())
		cout << "Lista vazia! Impossivel modificar." << endl;
	else if (posicao > sizeDeque)
		cout << "Posicao inválida! Impossivel modificar." << endl;
	else
	{
		int indice = 1;
		node* aux = inicio;
		while (indice != posicao)
		{
			indice++;
			aux = aux->next;
		}
		cout << "Lista modificada na posicao " << posicao << " de "<< aux->dado << " para "<< item << endl;
		aux->dado = item;
		printDeque();
	}
}

void deque::addItemAtPos(int item, int posicao)
{
	int i = 1;
	node* aux;
	node* aux2;
	node* novo;

	if (posicao > sizeDeque)
		addItemAtEnd(item);

	else if (posicao == 1)
		addItemAtBeginning(item);
	else
	{
		aux = inicio;
		aux2 = inicio->next;
		while (i != (posicao - 1))
		{
			aux = aux->next;
			aux2 = aux2->next;
			i++;
		}
		novo = new node(item, aux, aux2);
		aux2->back = novo;
		aux->next = novo;
		sizeDeque++;
	}
	aux = novo = NULL;
	delete aux;
	delete novo;
}