public abstract class Pessoa {
    protected String nome;
    protected Double rendaBruta;

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Double getRendaBruta() {
        return rendaBruta;
    }

    public void setRendaBruta(Double rendaBruta) {
        this.rendaBruta = rendaBruta;
    }

    public abstract Double calcularIR();
}
