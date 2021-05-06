#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H

#include <string>
#include <vector>
#include "Funcionario.h"
using namespace std;

class Departamento {
	private:
	string nome;
	vector<Funcionario*> funcionarios;

	public:
	//Construtores
	Departamento(const string& nome);

	//GETs & SETs
	const string& getNome() const;
	void setNome(const string& nome);

	//Métodos

	/*Retorna funcionário de índice passador como parâmetro*/
	Funcionario* getFuncionario(int idx) const;

	/*Adiciona funcionário ao departamento*/
	void adicionarFuncionario(Funcionario* funcionario);

	/*Remove funcionário do departamento*/
	void removerFuncionario(int idx);

	/*Dá aumento de percentual passado como parâmetro para todos os funcionários do departamento*/
	void darAumento(const double percentual);
	
	/*Calcula custo do departamento (soma do salário de todos os funcionarios integrantes)*/
	double calcularCusto() const;

	/*Apaga departamento e conteúdo*/
	~Departamento();
};

#endif /* DEPARTAMENTO_H */