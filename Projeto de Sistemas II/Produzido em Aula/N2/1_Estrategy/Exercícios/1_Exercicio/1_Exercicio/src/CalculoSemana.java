public class CalculoSemana implements CalculoValor {
    private double valorSemana;

    public CalculoSemana(double valorSemana) {
        this.valorSemana = valorSemana;
    }

    @Override
    public double calcular(Veiculo veiculo, double tempo) {
        return this.valorSemana * tempo;
    }
}