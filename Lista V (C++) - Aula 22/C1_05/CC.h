#ifndef CC_H
#define CC_H

class ContaCorrente{
    private:
    double saldo;

    friend class ContaCorrenteEspecial;

    public:
    //Contrutores
    ContaCorrente(double saldo);

    //Métodos
    void depositar(double quantia);

    void sacar(double quantia);

    double obterSaldo();
    
    void imprimirSaldo();
};

#endif /* CC_H */