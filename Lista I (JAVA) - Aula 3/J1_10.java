import java.util.Scanner;

public class J1_10 {

    public static void main (String[] args){

        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        int a = 0, b = 0, c = 1;
        
        if(n > 0){
            System.out.print("0 ");
        }
        if(n > 1){
            System.out.print("1 ");
        }
        for(int cont = 2; cont < n; cont++){
            a = b;
            b = c;
            c = a + b;

            System.out.print(c + " ");
        }
        System.out.println();
    }
}
