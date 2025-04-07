public class Conta {
    private double saldo;
    private EstadoConta estado;

    public Conta(double valorInicial) {
        if (valorInicial < 0) {
            System.out.println("O deposito inicial não pode ser negativo!");
        } else {
            this.setSaldo(valorInicial);
            this.setEstado(new Positivo());
            System.out.println("Sua conta foi criada com sucesso!");
            System.out.println("Seu saldo inicial é de R$ " + this.getSaldo());
        }
    }

    public double getSaldo() {
        return this.saldo;
    }

    public void setSaldo(double novoSaldo) {
        this.saldo = novoSaldo;
    }

    public EstadoConta getEstado() {
        return this.estado;
    }

    public void setEstado(EstadoConta estado) {
        this.estado = estado;
    }

    public void verificaEstado() {
        if (this.getEstado() instanceof Positivo) {
            System.out.println("Estado: POSITIVO");
        } else if (this.getEstado() instanceof Negativo) {
            System.out.println("Estado: NEGATIVO");
        } else if (this.getEstado() instanceof Bloqueado) {
            System.out.println("Estado: BLOQUEADO");
        }
    }

    void depositar(double valor) {
        this.estado.depositar(valor, this);
    }

    void sacar(double valor) {
        this.estado.sacar(valor, this);
    }
}