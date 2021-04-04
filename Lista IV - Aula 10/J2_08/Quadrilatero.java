public abstract class Quadrilatero implements Forma {
    private double a;
    private double b;
    private double c;
    private double d;

    Quadrilatero() {}

    Quadrilatero(double a, double b, double c, double d) {
        this.a = a;
        this.b = b;
        this.c = c;
        this.d = d;
    }

    public double caculaPerimetro(){
        return a+b+c+d;
    }

    /*public double calculaArea(){

    }*/
}