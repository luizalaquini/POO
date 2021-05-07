public class Circulo implements Forma {
    double raio;

    Circulo() {}
    
    Circulo(double raio){
        this.raio = raio;
    }

    public double calculaPerimetro(){
        return 2*PI*raio;
    }

    public double calculaArea(){
        return PI*raio*raio;
    }

    public String toString(){
        return String.format("Circulo de raio %.2f - perimetro: %.2f; area: %.2f.", this.raio, this.calculaPerimetro(), this.calculaArea()); 
    }
}
