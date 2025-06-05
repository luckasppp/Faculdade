public class Percentual implements Desconto {
    private double percentual;

    public Percentual(double percentual) {
        this.percentual = percentual;
    }

    @Override
    public double aplica(double valor) {
        return valor - (valor * percentual / 100);
    }

}
