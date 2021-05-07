public class DVD extends Produto {
    private int duracao;

    DVD(){}

    DVD(String nome, double preco, int duracao){
        super(nome, preco);
        this.setDuracao(duracao);
    }

    public void setDuracao(int duração) {
        this.duracao = duração;
    }

    public int getDuracao() {
        return duracao;
    }

    public String toString(){
       
        return super.toString() + this.duracao + " minutos";
    }
}
