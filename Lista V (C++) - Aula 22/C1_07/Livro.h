#ifndef LIVRO_H
#define LIVRO_H

#include <string>
#include "Produto.h"
using namespace std;

class Livro : public Produto{
    private:
    string autor;

    protected:
    virtual void print(ostream &out) const;

    public:
    //Construtor
    Livro(int cod, const string& nome, double preco, const string& autor);

    //Métodos
    friend ostream& operator<< (ostream &out, Livro &livro);
};

#endif /* LIVRO_H */