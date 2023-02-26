#include "listaVetor.h"

listaVetor::listaVetor(int x)
{
	ptrlista = new int[x];
	for (int i = 0;i < x;i++) {
		ptrlista[i] = NULL;
	}
	tamanhoLista = 0;
	maximo = x;
	ultimo = 0;
}

listaVetor::~listaVetor()
{
	delete[]ptrlista;
	tamanhoLista = NULL;
	maximo = NULL;
	ultimo = NULL;
}

bool listaVetor::listaCheia()
{
	/*if (tamanhoLista == maximo) {
		return true;
	}
	else {
		return false;
	}*/
	return tamanhoLista == maximo;
}

bool listaVetor::listaVazia()
{
	/*if (tamanhoLista == 0) {
		return true;
	}
	else {
		return false;
	}*/
	return tamanhoLista == 0;
}

int listaVetor::getTamanhoLista()
{
	return tamanhoLista;
}

void listaVetor::addItemAtPos(int item, int posicao)
{
	if (posicao > maximo || posicao <= 0) {
		cout << "A posição escolhida não pode exceder ou ser menor que o tamanho da lista.\n";
	}
	else {
		if (listaCheia()) {
			cout << "A lista está cheia.\n";
		}
		else {
			if (listaVazia()) {
				cout << "lista vazia item adcionado na posição 1.\n";
				ptrlista[tamanhoLista++] = item;
			}
			else {
				if (ptrlista[posicao - 1] == NULL && ptrlista[posicao - 2] != NULL) {
					ptrlista[posicao - 1] = item;
					cout << "Valor " << item << " adicionado na posição " << posicao - 1 << endl;
					tamanhoLista++;
				}
				else {
					if (ptrlista[posicao - 2] == NULL) {
						ptrlista[tamanhoLista++] = item;
						cout << "Existe posições anteriores a que você escolheu vagas, item adcionado na posição " << tamanhoLista << endl;
					}
					else {
						if (ptrlista[posicao - 1] != NULL) {
							for (int i = tamanhoLista - 1;i >= posicao - 1;i--) {
								ptrlista[i + 1] = ptrlista[i];
							}
							ptrlista[posicao - 1] = item;
							cout << "Valor " << item << " adicionado na posição " << posicao - 1 << endl;
							tamanhoLista++;
						}
					}
				}
			}
		}
	}
}

void listaVetor::removeItemAtPos(int posicao)
{
	if (posicao > maximo || posicao <= 0) {
		cout << "A posição escolhida não pode exceder ou ser menor que o tamanho da lista.\n";
	}
	else {
		if (listaVazia()) {
			cout << "A lista está vazia.\n";
		}
		else {
			if (ptrlista[posicao - 1] == NULL) {
				cout << "Não a nada na posição escolhida.\n";
			}
			else {
				if (posicao == tamanhoLista) {
					cout << "valor " << ptrlista[posicao - 1] << " removido da posição " << posicao - 1 << endl;
					ptrlista[posicao - 1] = NULL;
					tamanhoLista--;
				}
				else {
					cout << "valor " << ptrlista[posicao - 1] << " removido da posição " << posicao - 1 << endl;
					ptrlista[posicao - 1] = NULL;
					for (int i = posicao - 1;i < tamanhoLista - 1;i++) {
						ptrlista[i] = ptrlista[i + 1];
						ptrlista[i + 1] = NULL;
					}
					tamanhoLista--;
				}
			}
		}
	}
}

void listaVetor::addItemAtBeginning(int item)
{
	if (listaCheia()) {
		cout << "A lista está cheia.\n";
	}
	else {
		if (listaVazia()) {
			ptrlista[tamanhoLista++] = item;
			cout << "Valor " << item << " adicionado ao começo da lista."<< endl;
		}
		else {
			for (int i = tamanhoLista - 1;i >= 0;i--) {
				ptrlista[i + 1] = ptrlista[i];
			}
			ptrlista[0] = item;
			cout << "Valor " << item << " adicionado ao começo da lista." << endl;
			tamanhoLista++;
		}
	}
}

void listaVetor::removeItemAtBeginning()
{
	if (listaVazia()) {
		cout << "A lista está vazia.\n";
	}
	else {
		cout << "Valor " << ptrlista[0] << " removido do começo da lista." << endl;
		ptrlista[0] = NULL;
		if (tamanhoLista > 1) {
			for (int i = 0;i < tamanhoLista - 1;i++) {
				ptrlista[i] = ptrlista[i + 1];
				ptrlista[i + 1] = NULL;
			}
		}
		tamanhoLista--;
	}
}

void listaVetor::removeItem(int item)
{
	int aux = 0;
	if (listaVazia()) {
		cout << "A lista está vazia.\n";
	}
	else {
		for (int i = 0;i < tamanhoLista;i++) {
			if (ptrlista[i] == item) {
				ptrlista[i] = NULL;
				aux = 1;
				if (i == tamanhoLista - 1) {
					tamanhoLista--;
					cout << "Valor " << item << " removido da lista.\n";
				}
				else {
					for (int j = i;j < tamanhoLista - 1;j++) {
						ptrlista[j] = ptrlista[j + 1];
						ptrlista[j + 1] = NULL;
					}
					cout << "Valor " << item << " removido da lista.\n";
					tamanhoLista--;
				}
			}
		}
		if (aux == 0) {
			cout << "Item não encontrado na lista.\n";
		}
	}
}

void listaVetor::printList()
{
	if (listaVazia()) {
		cout << "A lista está vazia.\n";
	}
	else {
		cout << "Lista { ";
		for (int i = 0;i < tamanhoLista;i++) {
			cout << ptrlista[i];
			if (ptrlista[i + 1] != NULL && i != maximo - 1) {
				cout << " - ";
			}
		}
		cout << " }\n";
	}
}

void listaVetor::addItemAtEnd(int item)
{
	if (listaCheia()) {
		cout << "A lista está cheia.\n";
	}
	else {
		if (listaVazia()) {
			cout << "lista vazia valor "<<item<<" adcionado na posição 1.\n";
			ptrlista[tamanhoLista++] = item;
		}
		else {
			ptrlista[tamanhoLista++] = item;
			cout << "Valor " << item << " adcionado ao fim da lista.\n";
		}
	}
}

void listaVetor::removeItemAtEnd()
{
	if (listaVazia()) {
		cout << "A lista está vazia.\n";
	}
	else {
		cout << "Valor " << ptrlista[tamanhoLista - 1] << " removido do fim da lista.\n";
		ptrlista[--tamanhoLista] = NULL;
	}
}

void listaVetor::getMinMax()
{
	int menor, maior;
	if (listaVazia()) {
		cout << "A lista está vazia.\n";
	}
	else {
		if (tamanhoLista == 1) {
			cout << "Só tem 1 número na lista que é o: " << ptrlista[0] << endl;
		}
		else {
			maior = ptrlista[0];
			menor = ptrlista[0];
			for (int i = 0;i < tamanhoLista;i++) {
				if (ptrlista[i] > maior) {
					maior = ptrlista[i];
				}
				if (ptrlista[i] < menor) {
					menor = ptrlista[i];
				}
			}	
			cout << "O maior número da lista é: " << maior << endl;
			cout << "O menor número da lista é: " << menor << endl;
		}
	}
}

void listaVetor::esvaziaLista()
{
	if (listaVazia()) {
		cout << "A lista está vazia.\n";
	}
	else {
		for (int i = 0, j = tamanhoLista;i < j;i++) {
			removeItemAtEnd();
		}
		cout << "Lista esvaziada.\n";
	}
}

void listaVetor::findItem(int item)
{
	int aux = 0;
	if (listaVazia()) {
		cout << "A lista está vazia.\n";
	}
	else {
		for (int i = 0;i < tamanhoLista;i++) {
			if (ptrlista[i] == item) {
				cout << "Item " << item << " encontrado na posição " << i + 1 <<".\n";
				aux = 1;
			}
		}
		if (aux == 0) {
			cout << "Item não encontrado na lista.\n";
		}
	}
}

void listaVetor::modifyItem(int posicao, int item)
{
	string aux;
	if (posicao > maximo || posicao <= 0) {
		cout << "A posição escolhida não pode exceder ou ser menor que o tamanho da lista.\n";
	}
	else {
		if (listaVazia()) {
			cout << "A lista está vazia.\n";
		}
		else {
			if (ptrlista[posicao - 1] == NULL) {
				cout << "Não há item na posição indicada para modificar, gostaria de adcionar o item " << item << " na posição " << posicao << "?(S/N)\n";
				cin >> aux;
				transform(aux.begin(), aux.end(), aux.begin(), ::tolower);
				if (aux == "s") {
					addItemAtPos(item, posicao);
				}
				else {
					cout << "Operação cancelada.\n";
				}
			}
			else {
				cout << "Item " << ptrlista[posicao - 1] << " da posição " << posicao << " modificado para " << item << ".\n";
				ptrlista[posicao - 1] = item;
			}
		}
	}
}

void listaVetor::randpreencher()
{
	if (listaCheia()) {
		cout << "A lista está cheia.\n";
	}
	else {
		srand(time(NULL));
		for (int i = 0;i < maximo;i++) {
			if (ptrlista[i] == NULL) {
				ptrlista[i] = rand();
				tamanhoLista++;
			}
		}
		cout << "Lista agora esta cheia.\n";
		printList();
	}
}