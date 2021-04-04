import java.util.Scanner;

public class Teste{

    public static void main (String[] args){
        //Declara variáveis necessárias
        String nomeEmpresa, cnpj, nomeDepartamento, nomeFuncionario, data;
        double salario;
        int numDepartamentos, numFuncionarios, nfpd=0, nfsd=0;

        //Abre scanner
        Scanner scan = new Scanner(System.in);
        
        //Le da entrada: Nome da Empresa, CNPJ e Número de Departamentos
        nomeEmpresa = scan.next();
        cnpj = scan.next();
        numDepartamentos = scan.nextInt();

        //Atribui à classe EMPRESA
        Empresa empresa = new Empresa(numDepartamentos);
        empresa.setNome(nomeEmpresa);
        empresa.setCNPJ(cnpj);

        for(int i=0; i<numDepartamentos; i++){ //Escaneia departamentos
            //Le da entrada: Nome do Departamento e Número de Funcionários 
            nomeDepartamento = scan.next();
            numFuncionarios = scan.nextInt();

            if(i==0) nfpd = numFuncionarios;//Armazena o NUMERO DE FUNCIONARIOS DO PRIMEIRO DEPARTAMENTO (será necessário posteriormente)
            if(i==1){
                numFuncionarios++; //acrescimo de um espaço a ser alocado (será necessário posteriormente)
                nfsd = numFuncionarios;//Armazena o NUMERO DE FUNCIONARIOS DO SEGUNDO DEPARTAMENTO (será necessário posteriormente)
            } 
            
            //Atribui à classe DEPARTAMENTO
            Departamento departamento = new Departamento(numFuncionarios);
            if(i==1) numFuncionarios--; //diminui de volta - após alocação - pra não bugar o próximo for
            departamento.setNome(nomeDepartamento);
            //Atribui departamento à empresa
            empresa.setDepartamento(i, departamento);

            for(int j=0; j<numFuncionarios; j++){ //Escaneia funcionarios
                //Le da entrada: Nome do Funcionário, Salario e Data de Admissão
                nomeFuncionario = scan.next();
                salario = scan.nextDouble();
                data = scan.next();
                
                //Atribui à classe FUNCIONÁRIO
                Funcionario funcionario = new Funcionario();
                funcionario.setNome(nomeFuncionario);
                funcionario.setSalario(salario);
                funcionario.setData(data);
                //Atribui funcionário ao departamento
                empresa.departamentos[i].setFuncionario(j, funcionario);
            }
        }

        //1- DÊ AUMENTO DE 10% A TODOS OS FUNCIONÁRIOS DO PRIMEIRO DEPARTAMENTO

        //Declara mais variáveis necessárias 
        double novoSalario;

        for(int i=0; i<nfpd; i++){ //Dá aumento
            novoSalario = 1.1 * empresa.getDepartamento(0).getFuncionario(i).getSalario();
            empresa.getDepartamento(0).getFuncionario(i).setSalario(novoSalario);
        }

        //teste print
        /*System.out.println(empresa.getDepartamento(0).getFuncionario(0).getNome());
        System.out.println(nfsd-1);
        String teste = empresa.getDepartamento(0).getFuncionario(0).getNome();
        empresa.getDepartamento(1).getFuncionario(nfsd-1).setNome(teste);

        //2- TRANSFIRA O PRIMEIRO FUNCIONÁRIO DO PRIMEIRO DEPARTAMENTO PARA O SEGUNDO DEPARTAMENTO
        //Primeiro copia o primeiro funcionario do primeiro departamento para o ultimo espaço do segundo (que está vazio, pois alocamos um espaço a mais para o segundo departamento anteriormente)
        empresa.getDepartamento(1).getFuncionario(nfsd-1).setNome(empresa.getDepartamento(0).getFuncionario(0).getNome());
        empresa.getDepartamento(1).getFuncionario(nfsd-1).setSalario(empresa.getDepartamento(0).getFuncionario(0).getSalario());
        empresa.getDepartamento(1).getFuncionario(nfsd-1).setData(empresa.getDepartamento(0).getFuncionario(0).getData());
        
        //teste print
        System.out.println(empresa.getDepartamento(1).getFuncionario(nfsd-1).getNome());       */ //DANDO ERRO NESSE 2 

        scan.close();
    }
}