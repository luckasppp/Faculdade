public class PessoaFisica extends Pessoa{
    private String rg;

    public String getRG() {
        return rg;
    }

    public void setRG(String rg) {
        this.rg = rg;
    }

    public Double calcularIR() {
        Double imposto;

        if (this.rendaBruta < 1501) {
            imposto = this.rendaBruta * 0;
        } else if (this.rendaBruta < 3001) {
            imposto = this.rendaBruta * 0.1;
        } else if (this.rendaBruta < 10001) {
            imposto = this.rendaBruta * 0.20;
        } else {
            imposto = this.rendaBruta * 0.27;
        }
        return imposto;
    }
}