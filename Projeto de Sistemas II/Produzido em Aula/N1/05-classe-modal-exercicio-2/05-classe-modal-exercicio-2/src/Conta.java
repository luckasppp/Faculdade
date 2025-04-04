public class Conta {
    private Double saldo;
    private EstadoConta estado;

    public Conta(Double saldo) {
        this.estado = new Positivo(saldo);
        System.out.println("Sua conta foi criada com sucesso!");
        System.out.println("Seu saldo inicial é: " + this.saldo);
    }

    void depositar(Double valor) {
        this.saldo = estado.depositar(valor);
        estadoConta();
    }

    void estadoConta() {
        if (this.saldo < 0 && this.saldo > -100) {
            this.estado = new Negativo(this.saldo);
        }
    }
}
