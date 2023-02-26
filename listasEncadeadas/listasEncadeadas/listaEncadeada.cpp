#include "listaEncadeada.h"

//Construtor da Lista: usado pra criar uma lista "zerada"
listaEncadeada::listaEncadeada()
{
	inicio = NULL;
	fim = NULL;
	tamanhoLista = 0;
}

//Destrutor
listaEncadeada::~listaEncadeada()
{
	// implementar depois
	tamanhoLista = 0;
}

bool listaEncadeada::listaVazia() //Se lista estiver vazia, retorna true, caso contrário false.
{
	return inicio == NULL;
}

void listaEncadeada::addItemAEnd(int item)
{
	node* novo = new node(item, NULL); //Cria um novo node, com o next apontando pra NULL
	if (listaVazia())
	{
		fim=novo;
		inicio=novo;
	}
	else
	{
		fim->next = novo; //faz ligação do fim da lista para o novo node
		fim = novo;
	}
	tamanhoLista++;
	novo = NULL;
	delete novo;
}


void listaEncadeada::addItemAtBeginning(int item)
{
	node* novo = new node(item, NULL); //Cria um novo node, com o next apontando pra NULL
	if (listaVazia())
	{
		fim = novo;
		inicio = novo;
	}
	else
	{
		novo->next = inicio;
		inicio = novo;
	}
	tamanhoLista++;
	novo = NULL;
	delete novo;
}

void listaEncadeada::addItemAtPos(int item, int posicao)
{
	int i = 1; //Vai ser usado para contar as posicoes
	node* aux;
	node* novo;

	if (posicao > tamanhoLista) //Solução: adicionar no final da lista.
		addItemAEnd(item);
		//cout << "posicao invalida." << endl;
	else if (posicao == 1) //Solução: adicionar no inicio da lista.
		addItemAtBeginning(item);
	else //Caso genérico: todos os demais casos.
	{ 
		aux = inicio;
		while (i != (posicao - 1)) //"Andar" na lista até posicao - 1
		{
			aux = aux->next;
			i++;
		}
		novo = new node(item, aux->next);
		aux->next = novo;
		tamanhoLista++;
	}
	aux = novo = NULL;
	delete aux;
	delete novo;
}

int listaEncadeada::getTamanhoLista()
{
	return tamanhoLista;
}

void listaEncadeada::removeItemAtBeginning()
{
	if (listaVazia())
		cout << "Lista Vazia!" << endl;
	else if (tamanhoLista == 1)  // Se a lista tiver somente um node
	{
		node* aux;
		aux = inicio;
		inicio = fim = NULL;
		delete aux; //Apaga o node da memoria
		tamanhoLista--;
	}
	else
	{
		node* aux = inicio;
		inicio = inicio->next;
		aux->next = NULL;
		delete aux;
		tamanhoLista--;
	}
}

void listaEncadeada::removeItemAtEnd()
{
	if (listaVazia())
		cout << "Lista Vazia!" << endl;
	else if (tamanhoLista == 1)  // Se a lista tiver somente um node
	{
		node* aux;
		aux = inicio;
		inicio = fim = NULL;
		delete aux; //Apaga o node da memoria
		tamanhoLista--;
	}
	else
	{
		node* aux = inicio;
		while (aux->next != fim)
		{
			aux = aux->next;
		}
		delete fim;
		aux->next = NULL;
		fim = aux;
		tamanhoLista--;
		aux = NULL;
		delete aux;
	}
}

void listaEncadeada::removeItemAtPos(int posicao)
{
	if (listaVazia())
		cout << "Lista Vazia!" << endl;
	else if (posicao > tamanhoLista) // Posicao nao existe, nao tem como remover
		cout << "Posição inválida." << endl;
	else if (posicao == tamanhoLista) // Removendo do final da lista
	    removeItemAtEnd();
	else if (posicao==1)
	    removeItemAtBeginning();
	else
	{
		node* aux = inicio;
		int contador = 1;
		while (contador < (posicao - 1))
		{
			aux = aux->next;
			contador++;
		}
		node* temp;
		temp = aux->next;
		aux->next = temp->next;
		temp->next = NULL;
		delete temp;
		aux = NULL;
		delete aux;
		tamanhoLista--;
	}
}

void listaEncadeada::removeItem(int item)
{
	int posicao = 0; //nao existe a posicao 0 na lista. Começa com 1.
	bool encontrou = false;
	node* aux = inicio;
	while (aux != NULL)
	{
		if (aux->dado == item)
		{
			posicao++;
			aux = NULL;
			encontrou = true; //encontrou o item.
		}
		else
		{
			posicao++;
			aux = aux->next;
		}
	}

	if (encontrou == false)
		cout << "Item não encontrado. Impossível remover." << endl;
	else
		removeItemAtPos(posicao);
	delete aux;
}

void listaEncadeada::printList()
{
	node* aux = inicio;

	cout << "Lista: [ ";

	while (aux != NULL) // Vai percorrer toda a lista.
	{
		cout << aux->dado << " ";
		aux = aux->next;
	}
	cout << "]" << endl;
	cout << "Tamanho da lista: " << tamanhoLista << endl;
	delete aux;
}

void  listaEncadeada::getMinMax()
{
	int min, max;

	if (listaVazia())
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

void listaEncadeada::esvaziaLista() 
{
	while (!listaVazia())
		removeItemAtBeginning();
	inicio = fim = NULL;
	tamanhoLista = 0;
}

void listaEncadeada::findItem(int item)
{
	if (listaVazia())
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

void listaEncadeada::modifyItem(int posicao, int item)
{
	if (listaVazia())
		cout << "Lista vazia! Impossivel modificar." << endl;
	else if (posicao > tamanhoLista)
		cout << "Posicao inválida! Impossivel modificar." << endl;
	else 
	{
		int indice = 1; //nao existe a posicao 0 na lista. Começa com 1.
		node* aux = inicio;
		while (indice != posicao)
		{
			indice++;
			aux = aux->next;
		}
		aux->dado = item;
		cout << "Lista modificada na posicao " << posicao << endl;
		printList();
	}
}