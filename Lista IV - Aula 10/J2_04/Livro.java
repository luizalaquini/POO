public class Livro extends Produto {
    private String autor;

    Livro(){}

    Livro(String nome, double preco, String autor){
        super(nome, preco);
        this.setAutor(autor);
    }

    public void setAutor(String autor) {
        this.autor = autor;
    }

    public String getAutor() {
        return autor;
    }

    public String toString(){
       
        return super.toString() + this.autor;
    }
}


