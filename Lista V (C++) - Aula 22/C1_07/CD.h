#ifndef CD_H
#define CD_H

#include <string>
#include "Produto.h"
using namespace std;

class CD : public Produto{
    private:
    int faixas;

    protected:
    virtual void print(ostream &out) const;

    public:
    //Construtor
    CD(int cod, const string& nome, double preco, int faixas);

    //Métodos
    friend ostream& operator<< (ostream &out, CD &cd);
};

#endif /* CD_H */