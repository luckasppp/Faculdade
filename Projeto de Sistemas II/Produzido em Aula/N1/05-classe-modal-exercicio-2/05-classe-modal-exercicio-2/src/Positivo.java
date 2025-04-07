public class Positivo implements EstadoConta {
    @Override
    public void sacar(double valor, Conta conta) {
        if ((conta.getSaldo() - valor) < -100) { // Condição de cancelamento de saque.
            System.err.println(
                    "O valor de R$ " +
                            valor +
                            " excede o limite de R$ 100,00 do cheque especial.");
            System.out.println("Operação cancelada!");

        } else if ((conta.getSaldo() - valor) >= 0) { // Condição para saque que mantém estado 'POSITIVO'
            conta.setSaldo(conta.getSaldo() - valor);

        } else if ((conta.getSaldo() - valor) >= -100 && (conta.getSaldo() - valor) < 0) { // Condição para saques que deixam estado 'NEGATIVO'
            conta.setSaldo(conta.getSaldo() - valor); // Operação para novo saldo
            conta.setEstado(new Negativo()); // Operação para trocar estado
            System.out.println("Saque realizado com sucesso.");
            System.out.println(
                    "Seu novo saldo é de R$ " +
                            conta.getSaldo() +
                            ". Sua conta está com saldo negativo.");
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
        }
    }
}