public class Negativo implements EstadoConta {
    private Double saldo;

    public Negativo(Double saldo) {
        this.saldo = saldo;
    }

    @Override
    public Double sacar() {
        return saldo;
    }

    @Override
    public Double depositar() {
        return saldo;
    }
}
