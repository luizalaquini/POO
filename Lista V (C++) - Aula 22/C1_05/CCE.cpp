#include <iostream>
#include "CCE.h"
using namespace std;

ContaCorrenteEspecial::ContaCorrenteEspecial(double quantia): ContaCorrente(quantia){}

void ContaCorrenteEspecial::sacar(double quantia){
    double debito = (0.001*quantia) + quantia;
    this->saldo -= debito;
}