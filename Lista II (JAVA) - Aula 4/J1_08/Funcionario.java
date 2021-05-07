public class Funcionario {
    String nome;
    double salario;
    String data;

    public void setNome(String nome) {
        this.nome = nome;
    }

    String getNome(){
        return this.nome;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }

    double getSalario(){
        return this.salario;
    }

    public void setData(String data) {
        this.data = data;
    }

    String getData(){
        return this.data;
    }
}
