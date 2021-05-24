#include <iostream>
#include <string>
#include <vector>
#include "Livro.h"
#include "CD.h"
#include "DVD.h"
#include "Tokenizer.h"
using namespace std;

Produto* criarProduto(string linha){
    Tokenizer tok(linha, ','); // vai 'quebrar' a linha nas vírgulas
    vector<string> dados = tok.remaining(); // o conteúdo 'quebrado' é armazenado nesse vetor
    /* Nesse momento temos o vetor dados com as seguintes informações
    dados[0] = tipo
    dados[1] = codigo de barras
    dados[2] = nome
    dados[3] = preco
    dados[4] = (autor/faixas/duracao)
    PORÉM TUDO ISSO ESTÁ NO FORMATO STRING E PRECISA SER CONVERTIDO PARA OS FORMATOS REAIS. Para isso, temos as funções:
    stod(string dado), que converte string para DOUBLE e;
    stoi(string dado), que converte string para INTEIRO*/

    Produto* p = nullptr;
    int codigo = stoi(dados[1]);
    double preco = stod(dados[3]);

    switch (dados[0].at(0)) {
    case 'L':
        p = new Livro(codigo, dados[2], preco, dados[4]);
        break;
    case 'C':
        p = new CD(codigo, dados[2], preco, stoi(dados[4]));
        break;
    case 'D':
        p = new DVD(codigo, dados[2], preco, stoi(dados[4]));
        break;
    }

    return p;
}

int main (){
    int n; //numero de produtos
    string linha;

    cin >> n;
    getline(cin, linha); //ignora "resto da linha" e quebra de linha

    Produto* produtos[n];  
    for(int i=0; i<n; i++){
        getline(cin, linha);
        produtos[i] = criarProduto(linha);
    }

    getline(cin, linha);
	Produto* busca = criarProduto(linha);

    for (int i = 0; i < n; i++)
		if (*busca == *(produtos[i])) {
			cout << i << endl;
			return 0;
        }
	cout << "Produto nao encontrado." << endl;
}