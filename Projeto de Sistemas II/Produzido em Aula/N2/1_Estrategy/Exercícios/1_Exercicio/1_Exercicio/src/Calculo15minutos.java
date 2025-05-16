public class Calculo15minutos implements CalculoValor {
    private double valorPeriodo;

    public Calculo15minutos(double valorPeriodo) {
        this.valorPeriodo = valorPeriodo;
    }

    @Override
    public double calcular(Veiculo veiculo, double tempo) {
        return this.valorPeriodo * tempo;
    }
}
