public class Bloqueado implements EstadoConta {
    private Double saldo;

    public Bloqueado(Double saldo) {
        this.saldo = saldo;
    }

    @Override
    public Double sacar() {
        return 0.0;
    }

    @Override
    public Double depositar() {
        return saldo;
    }
}
