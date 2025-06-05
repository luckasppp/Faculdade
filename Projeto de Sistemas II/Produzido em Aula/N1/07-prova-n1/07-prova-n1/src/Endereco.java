public class Endereco {
    public String logradouro;
    public String cidade;
    public boolean ativo;

    public void setAtivo(boolean ativo) {
        if (ativo) {
            this.ativo = false;
        } else {
            this.ativo = true;
        }
    }
}
