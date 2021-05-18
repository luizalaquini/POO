#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string.h>
using namespace std;

class Pessoa{
    private:
    string nome;
    int idade;
    double altura;

    public:
    Pessoa (string nome, int idade, double altura);

    friend ostream& operator<< (ostream&, const Pessoa&);

    static bool comparaPorNome(const Pessoa*, const Pessoa*);
	static bool comparaPorIdade(const Pessoa*, const Pessoa*);
	static bool comparaPorAltura(const Pessoa*, const Pessoa*);
};

#endif /* PESSOA_H */