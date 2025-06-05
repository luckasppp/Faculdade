public class Promocional implements Desconto{
    public double percentual;
    public String dataLimitePromocao;

    public Promocional(double percentual, String dataLimitePromocao) {
        this.percentual = percentual;
        this.dataLimitePromocao = dataLimitePromocao;
    }

    @Override
    public double aplica(double valor) {
        if (dataLimitePromocao != null && !dataLimitePromocao.isEmpty()) {
            return valor - (valor * percentual / 100);
        }
        return valor;
    }
}
