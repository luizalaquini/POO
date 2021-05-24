#include <iostream>
#include "CD.h"

//Construtor
CD::CD(int cod, const string& nome, double preco, int faixas) : Produto(cod, nome, preco){
    this->faixas = faixas;
}

//Métodos
void CD::print(ostream &out) const {
	Produto::print(out); //chama a função de nome identico pertencente à produto
	out << " - " << faixas << " faixas"; //acrescenta a exclusividade de CD
}

ostream& operator<< (ostream &out, CD &cd) {
	cd.print(out);
	return out;
}