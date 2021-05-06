#include <iostream>
#include "Departamento.h"

//Construtores
Funcionario::Funcionario(const string& nome, double salario, const string& dataAdmissao) {
	this->setNome(nome);
	this->setSalario(salario);
	this->setDataAdmissao(dataAdmissao);
}

//GETs & SETs

void Funcionario::setNome(const string& nome){
	this->nome = nome;
}

double Funcionario::getSalario() const {
	return salario;
}
void Funcionario::setSalario(double salario){
	this->salario = salario;
}

void Funcionario::setDataAdmissao(const string& dataAdmissao){
	this->dataAdmissao = dataAdmissao;
}

//Métodos
void Funcionario::darAumento(double percentual) {
	salario += salario * percentual / 100;
}