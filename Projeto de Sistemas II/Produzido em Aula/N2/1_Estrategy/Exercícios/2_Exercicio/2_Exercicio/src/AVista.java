public class AVista {
    public double percentual;

    public AVista() {
        this.percentual = 30;
    }

    public double aplica(double valor) {
        return valor - (valor * percentual / 100);
    }
}