#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, ".utf-8");
	int A[]{ 1,0,5,-2,-5,7 }, B;
	B = A[0] + A[1] + A[5];
	cout << "A contem o valores:\n";
	for (int i = 0;i < sizeof(A) / sizeof(*A);i++) {
		cout << "indice " << i << "= " << A[i] << endl;
	}
	cout << "A soma do indice A0, A1 e A5 são: " << B << endl;
	A[3] = 100;
	cout << "A = ";
	for (int i = 0;i < sizeof(A) / sizeof(*A);i++) {
		cout << A[i] << ", ";
	}
	cout << "\n\n\n";
}