#include <iostream>
#include <cmath>
#include "Ponto.h"

using namespace std;

//Construtores
Ponto::Ponto(){ 
    this->setX(0);
    this->setY(0);
} //construtor vazio nos dá um ponto na origem(0, 0)

Ponto::Ponto(float x, float y){
    this->setX(x);
    this->setY(y);
}

//GETs & SETs
double Ponto::getX(){
    return this->x;
}
void Ponto::setX(double x){
    this->x = x;
}

double Ponto::getY(){
    return this->y;
}
void Ponto::setY(double y){
    this->y = y;
}

//Métodos
double Ponto::distancia(const Ponto &p) const{
    return sqrt(pow((this->x-p.x),2) + pow((this->y-p.y),2));
}