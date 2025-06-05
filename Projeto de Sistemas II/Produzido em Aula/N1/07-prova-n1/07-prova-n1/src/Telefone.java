public class Telefone {
    public int ddd;
    public int numero;
    public boolean ativo;

    public void setAtivo(boolean ativo) {
        if (ativo) {
            this.ativo = false;
        } else {
            this.ativo = true;
        }
    }
}
