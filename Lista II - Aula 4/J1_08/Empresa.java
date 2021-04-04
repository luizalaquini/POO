public class Empresa {
    String nome;
    String cnpj;
    Departamento[] departamentos;

    Empresa() {}

    Empresa (int num){
        this.departamentos = new Departamento[num];
    }

    public void setNome (String nome){
        this.nome = nome;
    }

    String getNome(){
        return this.nome;
    }

    public void setCNPJ (String cnpj){
        this.cnpj = cnpj;
    }

    String getCNPJ(){
        return this.cnpj;
    }

    public void setDepartamento (int i, Departamento departamento){
        this.departamentos[i] = departamento;
    }

    Departamento getDepartamento(int i){
        return this.departamentos[i];
    }
}
