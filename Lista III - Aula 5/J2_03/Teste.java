import java.util.Scanner;
    
public class Teste {
    
    public static void main (String[] args){
        
        //Variáveis necessarias
        Cliente cliente = new Cliente();
        Scanner scan = new Scanner(System.in);
        String entrada;

        //Leitura
        do {
            entrada = scan.nextLine();
            cliente.setNome(entrada);
            cliente.setCPF(null); //Inicializa cpf nulo para um novo cliente
            
            do {
                entrada = scan.nextLine();
                cliente.setCPF(entrada);

            } while (entrada.intern() != "+" && entrada.intern() != ".");
            
            //Impressão 
            System.out.println(cliente.getNome() + " " + cliente.getCPF());

        } while (entrada.intern() != ".");

        scan.close();
    }
}
/*OBSERVAÇÃO: Não quis utilizar vetor para não limitar a quantidade de clientes (já que também não foi exigido). Assim, utilizo apenas um cliente em que as informações vão sendo substituídas ao longo das entradas. O problema desse método é que não há como guardar os clientes para imprimir todos somente após terminar de inserir as entradas do programa, eles vão sendo impressos ao mesmo tempo em que se adicionam as informações.*/