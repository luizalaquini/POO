#include <iostream>
#include "CC.h"
#include "NumberUtils.h"
using namespace std;

//Contrutores
ContaCorrente::ContaCorrente(double saldo){
    this->saldo = saldo;
}

//Métodos
void ContaCorrente::depositar(double quantia){
    this->saldo += quantia;
}

void ContaCorrente::sacar(double quantia){
    double debito = (0.005*quantia) + quantia;
    this->saldo -= debito;
}

double ContaCorrente::obterSaldo(){
    return this->saldo;
}

void ContaCorrente::imprimirSaldo(){
    cout << "R$ " << formatDoubleCurrency(this->obterSaldo(), LOCALE_PT_BR) << endl;
}