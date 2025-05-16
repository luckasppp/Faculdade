public class ContaEstacionamento {
    protected Veiculo veiculo; // Assumindo que é um atributo do tipo Veiculo
    protected String inicio; // Assumindo que é uma data
    protected String fim; // Assumindo que é uma data
    protected CalculoValor calculo;

    public double valorConta() {
        return this.calculo.calcular(this.veiculo, calcularHoras());
    }

    private int calcularHoras() {
        // Lógica para calcular a quantidade de horas entre as datas
        return 0; // Retornar a quantidade de horas calculada
    }

    public Veiculo getVeiculo() {
        return veiculo;
    }

    public void setVeiculo(Veiculo veiculo) {
        this.veiculo = veiculo;
    }

    public String getInicio() {
        return inicio;
    }

    public void setInicio(String inicio) {
        this.inicio = inicio;
    }

    public String getFim() {
        return fim;
    }

    public void setFim(String fim) {
        this.fim = fim;
    }

    public CalculoValor getCalculo() {
        return calculo;
    }

    public void setCalculo(CalculoValor calculo) {
        this.calculo = calculo;
    }

    
}
