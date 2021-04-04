import java.util.Scanner;

public class Main {

    public static void main (String[] args) {
        
        int n; //número de produtos
        Scanner scan = new Scanner(System.in);

        n = scan.nextInt();
        scan.nextLine(); //ignora o \n

        Produto[] produtos = new Produto[n];

        //for de Leitura
        for (int i=0; i<n; i++){ 

            //Variáveis necessárias
            String tipo, nome, autor; 
            double preco;
            int faixas, duracao;

            String[] vetor = new String[4]; //Vetor de 4 posições que vai receber os atributos
            vetor = scan.nextLine().split(","); //"Corta" e separa o vetor linha nas vírgulas

            tipo = vetor[0];
            nome = vetor[1];
            preco = Double.parseDouble(vetor[2]);

            if (tipo.equals("C")){ //CD
                faixas = Integer.parseInt(vetor[3]);
                produtos[i] = new CD(nome, preco, faixas);
            }
            else if (tipo.equals("D")){ //DVD
                duracao = Integer.parseInt(vetor[3]);
                produtos[i] = new DVD(nome, preco, duracao);
            }
            else if (tipo.equals("L")){ //Livro
                autor = vetor[3];
                produtos[i] = new Livro(nome, preco, autor);
            }
        }

        //for de Impressão
        for (int i=0; i<n; i++){
            System.out.println(produtos[i].toString());
        }

        scan.close();
    }
    
}
