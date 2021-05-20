#include <iostream>
#include "DVD.h"

//Construtor
DVD::DVD(const string& nome, double preco, int duracao): Produto(nome, preco){
    this->duracao = duracao;
}

//Métodos
void DVD::print(ostream &out) const {
	Produto::print(out); //chama a função de nome identico pertencente à produto
	out << " - " << duracao << " minutos"; //acrescenta a exclusividade de DVD
}

ostream& operator<< (ostream &out, DVD &dvd) {
	dvd.print(out);
	return out;
}
