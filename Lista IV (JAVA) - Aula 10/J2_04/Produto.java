public abstract class Produto {
    private String nome;
    private double preco;

    Produto(){}

    Produto(String nome, double preco){
        this.setNome(nome);
        this.setPreco(preco);
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }
    
    public double getPreco() {
        return preco;
    }

    public String toString(){
        String s = this.nome + String.format(" (R$%.2f) - ", this.preco);
        
        return s;
    }
}


