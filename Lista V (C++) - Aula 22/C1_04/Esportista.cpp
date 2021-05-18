#include "Esportista.h"
#include "StringUtils.h"

//vai passar pelo contrutor de Pessoa antes de entrar no construtor de Esportista
Esportista::Esportista(const string& nome, int idade, double altura, const string& time): Pessoa(nome, idade, altura){  
    this->time = time;
}

bool Esportista::comparaPorTime(const Esportista* a, const Esportista* b){
    return cpp_util::stringCompare(a->time, b->time);
}

//vai imprimir primeiro o conteudo de Pessoa e, pra depois imprimir Esportista e (definido abaixo)
ostream& operator<< (ostream& out, const Esportista& e) {
	return out << static_cast<const Pessoa&>(e) << " - " << e.time;
}

