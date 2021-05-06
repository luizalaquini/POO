#include <iostream>
#include "Empresa.h"
#include "NumberUtils.h"

//Construtores
Empresa::Empresa(const string& nome, const string& cnpj) {
	this->nome = nome;
	this->cnpj = cnpj;
}

//Métodos
void Empresa::adicionarDepartamento(Departamento* departamento) {
	departamentos.push_back(departamento);
}

void Empresa::darAumento(const int idxDepto, const double percentual) {
	departamentos[idxDepto]->darAumento(percentual);
}

void Empresa::transferirFuncionario(const int idxDeptoOrigem, const int idxFunc, const int idxDeptoDestino) {
	Funcionario* f = departamentos[idxDeptoOrigem]->getFuncionario(idxFunc);
	departamentos[idxDeptoDestino]->adicionarFuncionario(f);
	departamentos[idxDeptoOrigem]->removerFuncionario(idxFunc);
}

Empresa::~Empresa() {
	for (auto d : departamentos) //for para todo departamento d do vetor
		delete d;
}

ostream& operator<<(ostream &out, const Empresa &empresa) {
	for (auto& d : empresa.departamentos)
		out << d->getNome() << " R$ " << formatDoubleCurrency(d->calcularCusto(), LOCALE_PT_BR) << endl;
	return out;
}

