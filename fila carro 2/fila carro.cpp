#include "Fila.h"
int main(){
	FilaCircular carros(5);
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
	cout << "Próximo a ser chamado: " << carros.Primeiro() << endl;
	carros.posicaoElemento(30);
	carros.posicaoElemento(50); //tratar quando o elemento nÃ£o existe na fila
	carros.apagarFila();
	carros.imprimir(); //testar a fila vazia.
}