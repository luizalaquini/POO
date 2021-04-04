import java.util.Scanner;

public class J1_03 {

    public static int MDC(int x, int y){
    int resto;
 
    while(y != 0){
      resto = x % y;
      x = y;
      y = resto;
    }
 
    return x;
  } 

    public static void main (String[] args){

        Scanner scan = new Scanner(System.in);   

        int x = scan.nextInt();
        int y = scan.nextInt();

        int result = MDC(x, y);

        System.out.println("" + result);
    }
}