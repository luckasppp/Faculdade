public class CalculoDiaria implements CalculoValor {
    private double valorDiaria;

    public CalculoDiaria(double valorDiaria) {
        this.valorDiaria = valorDiaria;
    }

    @Override
    public double calcular(Veiculo veiculo, double tempo) {
        return this.valorDiaria * tempo;
    }
}
