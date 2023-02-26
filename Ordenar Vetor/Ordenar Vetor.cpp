#include<iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, ".utf-8");
    int i, j, aux, A[10], B[10];

    cout << "Digite 10 números inteiros positivos.\n";
    for (i = 0;i < 10;i++) {
        cout << "Número " << i+1 << ": ";
        cin >> A[i];
    }
    cout << "\n\nOs números guardados no vetor A são: "<<A[0];
    for (i = 1;i < 10;i++) cout << " - " << A[i] ;
    aux = A[0];
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if ((A[j] < aux) && (A[j] != 0)) {
                aux = A[j];
            }
        }
        for (j = 0;j < 10;j++) {
            if (A[j] == aux) {
                A[j] = 0;
                break;
            }
        }
        B[i] = aux;
        for (j = 0;j < 10;j++) {
            if(A[j] > aux) aux = A[j];
        }
    }
    cout << "\n\nO vetor A agora possui: ";
    for (i = 0;i < 10;i++) cout << A[i] << " ";
    cout << "\n\nOs números que estavam no vetor A agora estão no vetor B em forma crescente: " << B[0];
    for (i = 1;i < 10;i++) cout << " - " << B[i];
    cout << endl;
    
    system("pause");
    system("cls");

    //Segunda forma!

    int numero[10];
    aux = 0;
    cout << "Digite 10 números inteiros positivos.\n";
    for (i = 0;i < 10;i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numero[i];
    }

    for (i = 0; i < 10; i++) {
        for (j = i+1; j < 10; j++) {
            if (numero[i] > numero[j]) {
                aux = numero[i];
                numero[i] = numero[j];
                numero[j] = aux;
            }
        }
    }
    cout << "\nValores no vetor número ordenados com sucesso!\n";
    for (i = 0;i < 10;i++){
        cout << numero[i] << " ";
    }
    cout << endl;

    system("pause");
}