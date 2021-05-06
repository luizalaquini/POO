#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
using namespace std;

class Funcionario {
	private:
	string nome;
	double salario;
	string dataAdmissao;

	/*Permite que objetos da classe Departamento acessem diretamente atributos da classe Funcionario mesmo que sejam privados*/
	friend class Departamento;

	public:
	//Construtores
	Funcionario(const string& nome, double salario, const string& dataAdmissao);

	//GETs & SETs
	void setNome(const string& nome);

	double getSalario() const;
	void setSalario(double salario);

	void setDataAdmissao(const string& dataAdmissao);

	//Métodos
	void darAumento(double percentual);
};

#endif /* FUNCIONARIO_H */
