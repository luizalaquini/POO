public class Teste {
    
    public static void main (String[] args){

        for (int i=0; i<5; i++){
            Aleatorio aleatorio = new Aleatorio();
            System.out.print(aleatorio.getNum() + " ");
            aleatorio.renovar();
            System.out.print(aleatorio.getNum() + " ");
        }
        System.out.print("\n");
    }
}
