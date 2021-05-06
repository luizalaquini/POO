#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Ponto.h"

class Triangulo {
    private:
    Ponto a, b, c; //pontos cartesianos

    public:
    //Construtores
    Triangulo(); 
    Triangulo(double xa, double ya, double xb, double yb, double xc, double yc);

    //GETs & SETs
    //não vou escrever por mera preguiça pq sei que não vai utilizar

    //Métodos
    double perimetro() const;
};

#endif /* TRIANGULO_H */