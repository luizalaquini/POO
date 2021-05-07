import java.util.Random;
import java.util.Scanner;

public class Aleatorio{
    public static Random rand;
    private static int VALOR_MAXIMO_DEFAULT = 100; 
    private int num;

    Aleatorio (){
        this(VALOR_MAXIMO_DEFAULT);
    }

    Aleatorio (int max){
        this.num = rand.nextInt(max);
    }

    int getNum (){
        return this.num;
    }

    static {
        Scanner scan = new Scanner(System.in);
        long seed = scan.nextLong();
        rand = new Random(seed);
        scan.close();
    }
    void renovar(){
        this.num = rand.nextInt(VALOR_MAXIMO_DEFAULT);
    }
}