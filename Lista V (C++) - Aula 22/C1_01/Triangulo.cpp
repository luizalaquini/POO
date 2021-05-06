#include <iostream>
#include "Triangulo.h"

using namespace std;

//Construtores

//Repare que a, b e c ESTÃO SENDO INICIADOS ANTES DO CORPO DO CONSTRUTOR!
Triangulo::Triangulo(double xa, double ya, double xb, double yb, double xc, double yc): a(xa, ya), b(xb, yb), c(xc, yc) {}

//GETs & SETs
// -

//Métodos
double Triangulo::perimetro() const{
    return a.distancia(b) + b.distancia(c) + c.distancia(a);
}
