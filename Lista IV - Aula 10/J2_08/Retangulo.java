public class Retangulo implements Forma {
    private double base;
    private double altura;

    Retangulo() {}

    Retangulo(double base, double altura) {
        this.base = base;
        this.altura = altura;
    }

    public double calculaPerimetro(){
        return (2*base)+(2*altura);
    }

    public double calculaArea(){
        return base*altura;
    }

    public String toString(){
        return String.format("Retangulo de base %.2f e altura %.2f - perimetro: %.2f; area: %.2f.", this.base,this.altura,this.calculaPerimetro(),this.calculaArea());
    }
}
