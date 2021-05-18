#include <iostream>
#include "Pessoa.h"
#include "StringUtils.h"
using namespace std;

Pessoa::Pessoa (string nome, int idade, double altura){
    this->nome = nome;
    this->idade = idade;
    this->altura = altura;
}

ostream& operator<< (ostream& out, const Pessoa& p) {
	return out << p.nome << " (idade: " << p.idade << "; altura: " << p.altura << ")";
}

bool Pessoa::comparaPorNome(const Pessoa* a, const Pessoa* b){
    return cpp_util::stringCompare(a->nome, b->nome);
}
	
bool Pessoa::comparaPorIdade(const Pessoa* a, const Pessoa* b){
    return a->idade < b->idade;
}
	
bool Pessoa::comparaPorAltura(const Pessoa* a, const Pessoa* b){
    return a->altura < b->altura;
}
