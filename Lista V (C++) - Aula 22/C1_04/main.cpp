#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm> //sort
#include "Esportista.h"
using namespace std;

int main (){
    string comando;
    vector<Esportista*> base;
    
    do {
        cin >> comando;

        if (comando == "cadastrar"){
            string nome, time;
            int idade;
            double altura;

            cin >> nome >> idade >> altura >> time;
            //Instancia indireta
            Esportista* e = new Esportista(nome, idade, altura, time);
            //Coloca na ultima posição do vetor
            base.push_back(e);
        }

        else if (comando == "listar"){
            int idx = 0;
            for (Esportista *e : base){
                cout << (idx++) << ": " << *e << endl;
            }
        }

        else if (comando == "excluir"){
            int idx;
            cin >> idx;
            Esportista *e = base[idx];

            //Apaga da base
			base.erase(base.begin() + idx);
			//Agora, podemos dar "free" na Esportista
			delete e;
        }

        else if (comando == "ordenar"){
            char tipo;
			cin >> tipo;

			switch (tipo) {
				case 'N':
					sort(begin(base), end(base), Esportista::comparaPorNome);
					break;
				case 'I':
					sort(begin(base), end(base), Esportista::comparaPorIdade);
					break;
				case 'A':
					sort(begin(base), end(base), Esportista::comparaPorAltura);
					break;
                case 'T':
                    sort(begin(base), end(base), Esportista::comparaPorTime);
			}
        }
    } while (comando != "sair");

    return 0;
}