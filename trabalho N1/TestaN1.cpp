#include "TestaN1.h"

void TestaN1::menu()
{
	int a, opt, it, ps;
	string rep;
	cout << "-----------------------------------------\n|\t     CMP 1054/C02\t\t|\n|\t\t\t\t\t|\n|Prof: Anibal Santos Jukemura\t\t|\n|\t\t\t\t\t|\n|Aluno: Fellipe José P. de Oliveira     |\n|Matricula: 2021.1.0028.0072-9    \t|\n-----------------------------------------\n\n";
	do {
		cout << "Qual tamanho deseja para sua lista?(Não podendo ser menor que 5)\n";
		cin >> a;
	} while (a < 5);
	listaVetor lista(a);
	cout << "\nLista com "<<a<<" posições criada com sucesso!\n";
	do {
		lista.printList();
		cout << "\n\nEscolha uma das opções a seguir para editar sua lista.\n\n";
		cout << "1 - Adicionar um valor inteiro em uma posição específica.\n";
		cout << "2 - Remover um valor inteiro de uma posição específica.\n";
		cout << "3 - Adicionar um valor inteiro no começo da lista.\n";
		cout << "4 - Remover um valor inteiro do começo da fila.\n";
		cout << "5 - Remover um valor inteiro da lista.\n";
		cout << "6 - Adicionar um valor inteiro ao fim da lista.\n";
		cout << "7 - Remover um valor inteiro do fim da lista.\n";
		cout << "8 - Exibir o maior e o menor valor da lista.\n";
		cout << "9 - Encontrar um valor inteiro na lista.\n";
		cout << "10 - Modificar um valor inteiro na lista.\n";
		cout << "11 - Apagar lista.\n";
		cout << "12 - Preencher toda lista com números random onde estiver vazio.\n";
		cout << "13 - Saber quantas posições tem sua lista ao todo.\n";
		cout << "\nOque deseja fazer?\n";
		cin >> opt;
		system("cls");
		switch (opt) {
			case 1:
				cout << "Qual valor inteiro deseja adicionar?\n";
				cin >> it;
				cout << "Em que posição deseja colocar?\n";
				cin >> ps;
				lista.addItemAtPos(it, ps);
				cout << "Deseja continuar a editar sua lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				system("cls");
				break;
			case 2:
				cout << "Em que posição deseja remover?\n";
				cin >> ps;
				lista.removeItemAtPos(ps);
				cout << "Deseja continuar a editar sua lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				system("cls");
				break;
			case 3:
				cout << "Qual valor inteiro deseja adicionar ao começo da lista?\n";
				cin >> it;
				lista.addItemAtBeginning(it);
				cout << "Deseja continuar a editar sua lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				system("cls");
				break;
			case 4:
				cout << "Deseja remover o item do começo da lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				if (rep == "s") {
					lista.removeItemAtBeginning();
				}
				else {
					cout << "Remoção cancelada.\n";
				}
				cout << "Deseja continuar a editar sua lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				system("cls");
				break;
			case 5:
				cout << "Qual valor inteiro deseja remover?\n";
				cin >> it;
				lista.removeItem(it);
				cout << "Deseja continuar a editar sua lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				system("cls");
				break;
			case 6:
				cout << "Qual valor inteiro deseja adicionar ao fim da lista?\n";
				cin >> it;
				lista.addItemAtEnd(it);
				cout << "Deseja continuar a editar sua lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				system("cls");
				break;
			case 7:
				cout << "Deseja remover o item do fim da lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				if (rep == "s") {
					lista.removeItemAtEnd();
				}
				else {
					cout << "Remoção cancelada.\n";
				}
				cout << "Deseja continuar a editar sua lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				system("cls");
				break;
			case 8:
				cout << "Deseja ver o maior e o menor valor da lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				if (rep == "s") {
					lista.getMinMax();
				}
				else {
					cout << "Operação cancelada.\n";
				}
				cout << "Deseja continuar a editar sua lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				system("cls");
				break;
			case 9:
				cout << "Qual valor inteiro deseja encontrar na lista?\n";
				cin >> it;
				lista.findItem(it);
				cout << "Deseja continuar a editar sua lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				system("cls");
				break;
			case 10:
				cout << "Qual posição deseja modificar na lista?\n";
				cin >> ps;
				cout << "Por qual valor inteiro deseja modificar a posição "<<ps<<"? \n";
				cin >> it;
				lista.modifyItem(ps, it);
				cout << "Deseja continuar a editar sua lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				system("cls");
				break;
			case 11:
				cout << "Deseja esvaziar a lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				if (rep == "s") {
					cout << "Lista vazia.\n";
					lista.esvaziaLista();
				}
				else {
					cout << "Operação cancelada.\n";
				}
				cout << "Deseja continuar a editar sua lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				system("cls");
				break;
			case 12:
				cout << "Deseja preencher a lista com números random?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				if (rep == "s") {
					lista.randpreencher();
				}
				else {
					cout << "Operação cancelada.\n";
				}
				cout << "Deseja continuar a editar sua lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				system("cls");
				break;
			case 13:
				cout << "Deseja saber quantas posições tem sua lista ao todo?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				if (rep == "s") {
					cout << "Sua lista tem " << lista.getTamanhoLista() << " espaços ao todo.\n";
				}
				else {
					cout << "Operação cancelada.\n";
				}
				cout << "Deseja continuar a editar sua lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				system("cls");
				break;
			default:
				cout << "Opção invalida?\n";
				cout << "Deseja continuar a editar sua lista?(S/N)\n";
				do {
					cin >> rep;
					transform(rep.begin(), rep.end(), rep.begin(), ::tolower);
					if (rep != "s" && rep != "n") {
						cout << "Opção invalida, digite novamente.\n";
					}
				} while (rep != "s" && rep != "n");
				system("cls");
				break;

		}
	} while (rep == "s");
	system("cls");
	cout << "Edição encerrada volte sempre!\n";
	system("pause");
}