#include <iostream>
#include "Departamento.h"

//Construtores
Departamento::Departamento(const string& nome) {
	this->setNome(nome);
}

//GETs & SETs

/*Sobre o retorno:
  string Departamento::getNome() // faço cópia no retorno
  string& Departamento::getNome() // PROIBIDO!!!!
  const string& // é eficiente (não faz cópia) e não deixa modificar do lado de fora do objeto
*/
const string& Departamento::getNome() const {
	return nome;
}
void Departamento::setNome(const string& nome){
	this->nome = nome;
}

//Métodos

Funcionario* Departamento::getFuncionario(int idx) const {
	return funcionarios[idx];
}

void Departamento::adicionarFuncionario(Funcionario* funcionario) {
	funcionarios.push_back(funcionario);
}

void Departamento::removerFuncionario(int idx) {
	funcionarios.erase(begin(funcionarios) + idx);
}

void Departamento::darAumento(const double percentual) {
	for(auto& f : funcionarios) //for para todo funcionario f do vetor 
		f->darAumento(percentual);
}

double Departamento::calcularCusto() const {
	double soma = 0;
	for (auto& f : funcionarios)
		soma += f->getSalario();
	return soma;
}

Departamento::~Departamento() {
	for (auto f : funcionarios)
		delete f;
}