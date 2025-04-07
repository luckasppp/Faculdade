public class Bloqueado implements EstadoConta {

    @Override
    public void sacar(double valor, Conta conta) {
        System.err.println("Operação cancelada. Sua conta encontra-se bloqueada.");
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
                System.out.println("Sua conta encontra-se com saldo positivo!");
            } else if (conta.getSaldo() > -100 && conta.getSaldo() < 0) {
                conta.setEstado(new Negativo());
                System.out.println("Sua conta encontra-se com saldo negativo!");
            }
        }
    }
}