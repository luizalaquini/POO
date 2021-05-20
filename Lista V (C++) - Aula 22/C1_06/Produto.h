#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
using namespace std;

class Produto{
    private:
    string nome;
    double preco;

    protected:
    /*OBS: Uma função virtual é uma função membro que espera-se que seja redefinida em classes derivadas. Quando você faz referência um objeto da classe derivada usando um ponteiro ou uma referência à classe base, pode chamar uma função virtual para esse objeto e executar a versão da classe derivada da função. As funções virtuais asseguram que a função correta seja chamada para um objeto, independentemente da expressão usada para fazer a chamada de função.
    Fonte: https://docs.microsoft.com/pt-br/cpp/cpp/virtual-functions?view=msvc-160
    */ 
    virtual void print(ostream &out) const;

    public:
    //Construtor
    Produto(const string& nome, double preco);

    //GETs 
    const string& getNome() const; //lembrando q esse ultimo const é pq o método não modifica o objeto

    double getPreco() const;

    //Métodos
    friend ostream& operator<<(ostream& out, const Produto& p);
};

#endif /* PRODUTO_H */