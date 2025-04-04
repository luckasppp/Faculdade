public class Positivo implements EstadoConta {
    private Double saldo;

    public Positivo() {
        this.saldo = 0.0;
    }

    public Positivo(Double saldo) {
        if(saldo < 0) {
            System.out.println("Saldo não pode ser negativo. Definindo saldo como 0.0.");
            this.saldo = 0.0;
        } else {
            this.saldo = saldo;
        }
    }

    @Override
    public Double sacar() {
        return saldo;
    }

    @Override
    public Double depositar(Double valor) {
        if (valor < 0) {
            System.out.println("Valor de depósito não pode ser negativo. Operação cancelada.");
        } else {
            this.saldo += valor;
            System.out.println("Depósito de " + valor + " realizado com sucesso. Novo saldo: " + this.saldo);
        }
        return this.saldo;
    }

    public Double getSaldo() {
        return saldo;
    }
}
