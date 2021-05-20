#include <iostream>
#include "Produto.h"
using namespace std;

//Construtor
Produto::Produto(const string& nome, double preco){
    this->nome = nome;
    this->preco = preco;
}

//GETs 
const string& Produto::getNome() const{
    return this->nome;
}

double Produto::getPreco() const{
    return this->preco;
}

//Métodos
void Produto::print(ostream &out) const{ 
    out << nome << " (R$ " << preco << ")"; //coloquei em "protected" pois faz esses acessos diretos aos atributos
}

ostream& operator<<(ostream& out, const Produto& p){
    p.print(out);
    return out;
}