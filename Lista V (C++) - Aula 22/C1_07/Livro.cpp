#include <iostream>
#include "Livro.h"

//Construtor
Livro::Livro(int cod, const string& nome, double preco, const string& autor) : Produto(cod, nome, preco){
    this->autor = autor;
}

//Métodos
void Livro::print(ostream &out) const {
	Produto::print(out); //chama a função de nome identico pertencente à produto
	out << " - " << autor; //acrescenta a exclusividade de livro
}

ostream& operator<< (ostream &out, Livro &livro) {
	livro.print(out);
	return out;
}