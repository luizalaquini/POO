public class Quadrado implements Forma {
    private double lado;

    Quadrado() {}

    Quadrado(double lado){
        this.lado = lado;
    }

    public double calculaPerimetro(){
        return lado*4;
    }

    public double calculaArea(){
        return lado*lado;
    }

    public String toString(){
        return String.format("Quadrado de lado %.2f - perimetro: %.2f; area: %.2f.", this.lado, this.calculaPerimetro(), this.calculaArea());
    }
}
