#include <cstdlib>
#include "Pessoa.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "portuguese");
	int n;
	string z;
	cout << "Quantos funcionario deseja cadastrar?\n";
	cin >> n;
	cin.ignore();
	system("cls");
	Pessoa* funcionario = new Pessoa[n];
	for (int i = 0;i < n;i++) {
		cout << "Qual nome do funcionario " << i + 1 << "?\n";
		getline(cin, z);
		system("cls");
		funcionario[i].setNome(z);
		system("cls");
		do {
			cout << "Qual o cargo do funcionario " << i + 1 << "?(Gerente, Analista, Assistente ou Estagiario)\n";
			getline(cin, z);
			transform(z.begin(), z.end(), z.begin(), ::tolower);
			system("cls");
		} while (z != "analista" && z != "gerente" && z != "assistente" && z != "estagiario");
		funcionario[i].setCargo(z);
		funcionario[i].calculaSalario(z);
	}
	for (int i = 0;i < n;i++) {
		funcionario[i].imprimir();
	}
	system("pause");
}