#include <iostream>
#include <string>
#include <vector>
#include "Livro.h"
#include "CD.h"
#include "DVD.h"
#include "Tokenizer.h"
using namespace std;

int main (){
    int n; //numero de produtos
    string linha;

    cin >> n;
    getline(cin, linha); //ignora "resto da linha" e quebra de linha

    Produto* produtos[n];  

    for(int i=0; i<n; i++){
        getline(cin, linha);
        
        Tokenizer tok(linha, ','); // vai 'quebrar' a linha nas vírgulas
		vector<string> dados = tok.remaining(); // o conteúdo 'quebrado' é armazenado nesse vetor
        /* Nesse momento temos o vetor dados com as seguintes informações
        dados[0] = tipo
        dados[1] = nome
        dados[2] = preco
        dados[3] = (autor/faixas/duracao)
        PORÉM TUDO ISSO ESTÁ NO FORMATO STRING E PRECISA SER CONVERTIDO PARA OS FORMATOS REAIS. Para isso, temos as funções:
        stod(string dado), que converte string para DOUBLE e;
        stoi(string dado), que converte string para INTEIRO*/

        switch (dados[0].at(0)) {
        case 'L':
            produtos[i] = new Livro(dados[1], stod(dados[2]), dados[3]);
            break;
        case 'C':
            produtos[i] = new CD(dados[1], stod(dados[2]), stoi(dados[3]));
            break;
        case 'D':
            produtos[i] = new DVD(dados[1], stod(dados[2]), stoi(dados[3]));
            break;
        }
    }
    for (Produto* p : produtos) cout << *p << endl;

    return 0;
}