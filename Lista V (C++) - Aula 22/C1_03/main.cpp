#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm> //sort
#include "Pessoa.h"
using namespace std;

int main (){
    string comando;
    vector<Pessoa*> base;
    
    do {
        cin >> comando;

        if (comando == "cadastrar"){
            string nome;
            int idade;
            double altura;

            cin >> nome >> idade >> altura;
            //Instancia indireta
            Pessoa* p = new Pessoa(nome, idade, altura);
            //Coloca na ultima posição do vetor
            base.push_back(p);
        }

        else if (comando == "listar"){
            int idx = 0;
            for (Pessoa *p : base){
                cout << (idx++) << ": " << *p << endl;
            }
        }

        else if (comando == "excluir"){
            int idx;
            cin >> idx;
            Pessoa *p = base[idx];

            //Apaga da base
			base.erase(base.begin() + idx);
			//Agora, podemos dar "free" na Pessoa
			delete p;
        }

        else if (comando == "ordenar"){
            char tipo;
			cin >> tipo;

			switch (tipo) {
				case 'N':
					sort(begin(base), end(base), Pessoa::comparaPorNome);
					break;
				case 'I':
					sort(begin(base), end(base), Pessoa::comparaPorIdade);
					break;
				case 'A':
					sort(begin(base), end(base), Pessoa::comparaPorAltura);
					break; 
			}
        }
    } while (comando != "sair");

    return 0;
}