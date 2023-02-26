#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, ".utf-8");
    int sorteado[]{ 5,9,6,3,18,25,21,28,11,15,16,7,17,24,20 }, digitados[20];
    int acertos = 0,i,j;
    for (i = 0;i < 20;i++) digitados[i] = 0;
    cout << "Digite 20 números inteiros de 1 a 25 diferentes que deseja jogar na lotofacil:\n";
    for (i = 0;i < 20;i++) {
        cin >> digitados[i];
    }
    system("cls");
    cout << "Os números sorteados na lotofacil foram:\n";
    cout << "sorteados[";
    for (i = 0;i < 15;i++) {
        cout << sorteado[i] << ", ";
    }
    cout << "]\n\n";
    for (i = 0;i < 20;i++) {
        for (j = 0;j < 15;j++) {
            if (digitados[i] == sorteado[j]) {
                acertos += 1;
            }
        }
    }
    cout << "Números que você jogou!\n";
    cout << "jogados[ ";
    for (i = 0;i < 20;i++) {
        cout << digitados[i] << ", ";
    }
    cout << "]";
    cout << "\n\nVocê fez " << acertos << " pontos!\n\n";
    system("pause");
}