public class CD extends Produto {
    private int faixas;

    CD(){}

    CD(String nome, double preco, int faixas){
        super(nome, preco);
        this.setFaixas(faixas);
    }

    public void setFaixas(int faixas) {
        this.faixas = faixas;
    }

    public int getFaixas() {
        return faixas;
    }

    public String toString(){
        return super.toString() + this.faixas + " faixas";
    }
}
