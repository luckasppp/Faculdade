public interface EstadoConta {
    void sacar(double valor, Conta cc);

    void depositar(double valor, Conta cc);
}