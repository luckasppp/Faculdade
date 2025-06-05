public class CalculoCarga implements CalculoValor {
    private double valorPeso;

    CalculoCarga(double valorPeso) {
        this.valorPeso = valorPeso;
    }

    public double calcular(Veiculo veiculo, double tempo) {
        return this.valorPeso * veiculo.getPeso();
    }
}