public class Departamento {
    String nome;
    Funcionario[] funcionarios;

    Departamento() {}

    Departamento(int num){
        this.funcionarios = new Funcionario[num];
    }

    public void setNome (String nome) {
        this.nome = nome;
    }

    String getNome(){
        return this.nome;
    }

    public void setFuncionario (int j, Funcionario funcionario) {
        this.funcionarios[j] = funcionario;
    }

    Funcionario getFuncionario(int i){
        return this.funcionarios[i];
    }
}
