public class Aniversario implements Desconto {
    public int nrLivros;
    public double limiteValor;

    public Aniversario(int nrLivros, double limiteValor) {
        this.nrLivros = nrLivros;
        this.limiteValor = limiteValor;
    }

    @Override
    public double aplica(double valor) {
        if (nrLivros > 3 && valor > limiteValor) {
            return valor * 0.8; // aplica 20% de desconto
        }
        return valor;
    }
}
