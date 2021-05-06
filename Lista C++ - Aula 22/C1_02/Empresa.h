#ifndef EMPRESA_H
#define EMPRESA_H

#include <string>
#include "Departamento.h"
using namespace std;

class Empresa {
	private:
	string nome;
	string cnpj;
	vector<Departamento*> departamentos;

	public:
	//Construtores
	Empresa(const string& nome, const string& cnpj);

	//Métodos

	/*Adiciona um novo departamento à empresa*/
	void adicionarDepartamento(Departamento* departamento);

	/*Dá aumento de percentual passado como parâmetro à todos os funcionários de um departamento - de índice passado como parâmetro*/
	void darAumento(const int idxDepto, const double percentual);

	/*Transfere um funcionário - de índice passado como parâmetro - entre departamentos - de índices também passados como parâmetro*/
	void transferirFuncionario(const int idxDeptoOrigem, const int idxFunc, const int idxDeptoDestino);

	/*Configura cout*/
	friend ostream& operator<< (ostream &out, const Empresa &empresa);

	/*Deleta empresa e conteúdo*/
	~Empresa();
};

#endif /* EMPRESA_H */
