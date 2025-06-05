public class App {
    public static void main(String[] args) {
        Veiculo veiculo = new Veiculo("ABC-1234", 600.0);
        CalculoValor calculo = new CalculoCarga(0.11);

        // Teste com cálculo por carga
        ContaEstacionamento conta = new ContaEstacionamento();

        conta.setCalculo(calculo);
        conta.setVeiculo(veiculo);
        conta.setInicio("2023-10-01 08:00");
        conta.setFim("2023-10-01 11:00");

        System.out.println("Valor da conta: R$ " + conta.valorConta());
    }
}
