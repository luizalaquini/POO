#ifndef ESPORTISTA_H
#define ESPORTISTA_H

#include <iostream>
#include <string>
#include "Pessoa.h"
using namespace std;

class Esportista: public Pessoa {
    private:
    string time;

    public:
    Esportista(const string& nome, int idade, double altura, const string& time);

    friend ostream& operator<< (ostream&, const Esportista&);

    static bool comparaPorTime(const Esportista*, const Esportista*);
};

#endif /* ESPORTISTA_H */