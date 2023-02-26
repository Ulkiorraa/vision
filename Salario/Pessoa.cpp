#include "Pessoa.h"

void Pessoa::setNome(string N)
{
	nome = N;
}

string Pessoa::getNome()
{
	return string(nome);
}

void Pessoa::setCargo(string G)
{
	cargo = G;
}

string Pessoa::getCargo()
{
	return string(cargo);
}

void Pessoa::setSalario(double valor)
{
	salario = valor;
}

double Pessoa::getSalario()
{
	return salario;
}

void Pessoa::calculaSalario(string categoria)
{
	transform(categoria.begin(), categoria.end(), categoria.begin(), ::tolower);
	if (categoria.compare("analista")==0) setSalario(2000.00);
	else
		if(categoria.compare("gerente")==0) setSalario(3000.00);
		else
			if (categoria.compare("assistente")==0) setSalario(1000.00);
			else
				if (categoria.compare("estagiario")==0) setSalario(600.00);
}

void Pessoa::imprimir()
{
	setlocale(LC_ALL, "portuguese");
	cout << "Nome: " << getNome() << endl;
	cout << "Cargo: " << getCargo() << endl;
	cout << "Salário: R$" << getSalario() << endl << endl;
}
