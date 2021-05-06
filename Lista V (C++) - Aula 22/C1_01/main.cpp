#include <iostream>
#include <iomanip>
#include "Triangulo.h"

using namespace std;

int main(){
    double xa, ya, xb, yb, xc, yc;

    cin >> xa >> ya >> xb >> yb >> xc >> yc;

    Triangulo t(xa, ya, xb, yb, xc, yc);

    double p = t.perimetro();

    /*Biblioteca iomanip:
     fixed (notação decimal fixa)
	 setprecision(5) (garante 5 casas decimais)*/
    cout << fixed << setprecision(5) << p << endl;

    return 0;
}