public class CalculoHora implements CalculoValor {
    private double valorHora;

    public CalculoHora(double valorHora) {
        this.valorHora = valorHora;
    }

    @Override
    public double calcular(Veiculo veiculo, double tempo) {
        return this.valorHora * tempo;
    }
}
