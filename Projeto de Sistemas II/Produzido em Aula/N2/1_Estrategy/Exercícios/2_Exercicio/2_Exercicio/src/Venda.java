public class Venda {
    public double valor;
    public Desconto desconto;

    public Venda(double valor, Desconto desconto) {
        this.valor = valor;
        this.desconto = desconto;
    }

    public double aplicaDesconto() {
        return desconto.aplica(valor);
    }
}