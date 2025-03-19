public class PessoaJuridica extends Pessoa {
    private String cnpj;

    public String getCNPJ() {
        return cnpj;
    }

    public void setCNPJ(String cnpj) {
        this.cnpj = cnpj;
    }

    public Double calcularIR() {
        Double imposto;

        if (this.rendaBruta < 30001) {
            imposto = this.rendaBruta * 0;
        } else if (this.rendaBruta < 50001) {
            imposto = this.rendaBruta * 0.1;
        } else if (this.rendaBruta < 90001) {
            imposto = this.rendaBruta * 0.2;
        } else {
            imposto = this.rendaBruta * 0.27;
        }
        return imposto;
    }
}
