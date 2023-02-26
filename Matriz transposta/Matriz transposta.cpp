#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, ".utf-8");
	int L, C, A[5][3], B[3][5];
	cout << "Digite números inteiros para matriz A\n";
	for (L = 0;L < 5;L++) {
		for (C = 0;C < 3;C++) {
			cout << "A[" << L << "][" << C << "] = ";
			cin >> A[L][C];
		}
	}
	cout << "\nMatriz A fico da seguinte forma:\n";
	cout << "A{";
	for (L = 0;L < 5;L++) {
		for (C = 0;C < 3;C++) {
			cout <<A[L][C] << " ";
		}
		cout <<"}\n  ";
	}
	for (L = 0;L < 5;L++) {
		for (C = 0;C < 3;C++) {
			B[C][L] = A[L][C];
		}
	}
	cout << "\n\nMatriz B fico da seguinte forma:\n";
	cout << "B{";
	for (L = 0;L < 3;L++) {
		for (C = 0;C < 5;C++) {
			cout << B[L][C] << " ";
		}
		cout << "}\n  ";
	}
}