#include "Fila.h"
int main(){
	Fila carros(5);
	cout << "Próximo a ser chamado: " << carros.inicio() << endl;
	carros.inserir(10);
	carros.inserir(20);
	carros.inserir(30);
	carros.inserir(40);
	carros.inserir(50);
	carros.inserir(60); //tem que acusar erro de Fila cheia
	carros.imprimir();
	carros.remover();
	/*carros.remover();
	carros.remover();
	carros.remover();
	carros.remover();*/
	carros.imprimir();
	cout << "Próximo a ser chamado: " << carros.inicio() << endl;
	carros.posicaoElemento(30);
	carros.posicaoElemento(10); //tratar quando o elemento não existe na fila
	carros.apagarFila();
	carros.imprimir(); //testar a fila vazia.


}