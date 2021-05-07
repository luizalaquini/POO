import java.util.Scanner;

public class Main {
    public static void main (String[] args){
        
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        scan.nextLine(); //ignora o \n
        //n++;

        String[] vetor = new String[4];

        Forma formas[] = new Forma[n];

        for(int i=0; i<n; i++){
            vetor = scan.nextLine().split(",");

            if(vetor[0].equals("R")){
                formas[i] = new Retangulo(Double.parseDouble(vetor[1]),Double.parseDouble(vetor[2]));
            }
            else if(vetor[0].equals("Q")){
                formas[i] = new Quadrado(Double.parseDouble(vetor[1]));
            }
            else if(vetor[0].equals("C")){
                formas[i] = new Circulo(Double.parseDouble(vetor[1]));
            }
            else{
                System.out.println("Forma indisponivel");
            }
        }
        scan.close();

        for(int i=0; i<n; i++){
            System.out.println(formas[i].toString());
        }
    }
}
