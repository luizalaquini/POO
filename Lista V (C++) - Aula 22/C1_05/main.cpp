#include <iostream>
#include "CCE.h"
using namespace std;

int main (){
    char tipo, operacao;
    double qtd;

    cin >> tipo;
    
    if(tipo == 'C'){
        ContaCorrente* cc = new ContaCorrente(0.0);

        do {
            cin >> operacao;

            switch (operacao){
            case '+':
                cin >> qtd;
                cc->depositar(qtd);
                cc->imprimirSaldo();
                break;
            case '-':
                cin >> qtd;
                cc->sacar(qtd);
                cc->imprimirSaldo();
                break;
            case '.':
                break;
            }
        } while (operacao != '.');
        
    } else if (tipo == 'E'){
        ContaCorrenteEspecial* cce = new ContaCorrenteEspecial(0.0);

        do {
            cin >> operacao;

            switch (operacao){
                case '+':
                    cin >> qtd;
                    cce->depositar(qtd);
                    cce->imprimirSaldo();
                    break;
                case '-':
                    cin >> qtd;
                    cce->sacar(qtd);
                    cce->imprimirSaldo();
                    break;
                case '.':
                    break;
            }
        } while (operacao != '.');
    }

    return 0;
}