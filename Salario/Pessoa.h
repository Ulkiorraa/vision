#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
class Pessoa
{
	private:
		string nome;
		string cargo;
		double salario;
		void setSalario(double valor);
		double getSalario();
	public:
		void setNome(string N);
		string getNome();
		void setCargo(string G);
		string getCargo();
		void calculaSalario(string categoria);
		void imprimir();
};

