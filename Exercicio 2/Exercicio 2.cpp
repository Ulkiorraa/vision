#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, ".utf-8");
	int D[10],aux[10],e;
	e = 0;
	cout << "digite 10 numeros sendo eles inteiros negativos ou positivos\n";
	for (int i = 0;i < 10;i++) {
		cin >> aux[i];
	}
	cout << "\n\n os numeros digitados foram:\n";
	for (int i = 0;i < 10;i++) {
		cout << aux[i] << endl;
	}
	for (int i = 0;i < 10;i++) {
		if (aux[i] > 0) {
			D[e] = aux[i];
			e++;
		}
	}
	cout << "\n\nOs valores de D são\n";
	for (int i = 0;i < e;i++) {
		cout << D[i] << endl;
	}
	return 0;
}