#ifndef PONTO_H
#define PONTO_H

class Ponto{
    private:
    double x, y; //coordenadas x e y

    public:
    //Construtores
    Ponto();
    Ponto(float x, float y);

    //GETs & SETs 
    double getX();
    void setX(double x);

    double getY();
    void setY(double y);

    //Métodos

    /*Calcula distância eucliadiana entre dois pontos (ponto "this" e ponto p)
    A passagem de ponto com & é para não haver cópia de parâmetro, melhorando a eficiência
    Se o ponto não é modificado no método ele deve ser passado como const
    O último const determina que o método não modifica o objeto
    */
    double distancia(const Ponto &p) const;
};

#endif /* PONTO_H */