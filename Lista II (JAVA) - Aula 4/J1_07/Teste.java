import java.util.Scanner;

public class Teste {
    public static void main (String[] args){

        Scanner scan = new Scanner(System.in);

        Triangulo t = new Triangulo();

        t.p1.x = scan.nextDouble();
        t.p1.y = scan.nextDouble();
        t.p2.x = scan.nextDouble();
        t.p2.y = scan.nextDouble();
        t.p3.x = scan.nextDouble();
        t.p3.y = scan.nextDouble();

        //Distância entre dois pontos: d² = (x - x0)² + (y - y0)²
        double d, p = 0;
        
        d = Math.sqrt(Math.pow((t.p1.x - t.p2.x), 2) + Math.pow((t.p1.y - t.p2.y), 2));
        p += d;
        d = Math.sqrt(Math.pow((t.p2.x - t.p3.x), 2) + Math.pow((t.p2.y - t.p3.y), 2));
        p += d;
        d = Math.sqrt(Math.pow((t.p3.x - t.p1.x), 2) + Math.pow((t.p3.y - t.p1.y), 2));
        p += d;

        System.out.printf("%.5f\n", p);

        scan.close();
    }
}