#ifndef CCE_H
#define CCE_H

#include <iostream>
#include "CC.h"

class ContaCorrenteEspecial: public ContaCorrente{
    public:
    ContaCorrenteEspecial(double quantia);

    //@Override
    void sacar(double quantia);
};

#endif /* CCE_H */