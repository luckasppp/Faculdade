public class Negativo implements EstadoConta {

    @Override
    public void sacar(double valor, Conta conta) {
        if (conta.getSaldo() == -100) {
            conta.setEstado(new Bloqueado());
            System.out.println("Não foi possível realizar essa transação. Operação cancelada!");
            System.out.println(
                    "Seu saldo atual é de R$ " +
                            conta.getSaldo() +
                            ". Sua conta foi bloqueada.");
        } else if ((conta.getSaldo() - valor) >= -100) {
            conta.setSaldo(conta.getSaldo() - valor);
        }

    }

    @Override
    public void depositar(double valor, Conta conta) {
        if (valor < 0) {
            System.out.println("Valor de depósito não pode ser negativo. Operação cancelada.");
        } else {
            conta.setSaldo(conta.getSaldo() + valor);
            System.out.println(
                    "Depósito de R$ " +
                            valor +
                            " realizado com sucesso. Novo saldo: R$ " +
                            conta.getSaldo());
            if ((conta.getSaldo() >= 0)) {
                conta.setEstado(new Positivo());
            }
        }
    }
}