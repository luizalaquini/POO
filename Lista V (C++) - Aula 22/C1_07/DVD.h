#ifndef DVD_H
#define DVD_H

#include <string>
#include "Produto.h"
using namespace std;

class DVD : public Produto{
    private:
    int duracao; //em minutos

    protected:
    virtual void print(ostream &out) const;

    public:
    //Construtor
    DVD(int cod, const string& nome, double preco, int duracao);

    //Métodos
    friend ostream& operator<< (ostream &out, DVD &dvd);
};

#endif /* DVD_H */