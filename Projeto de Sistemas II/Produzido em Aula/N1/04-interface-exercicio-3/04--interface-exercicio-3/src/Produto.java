public class Produto implements DAO {
    private int numero;
    private String descricao;

    public void inserir() {
        System.out.println("Produto inserido com sucesso!");
    }

    public void excluir() {
        System.out.println("Produto excluído com sucesso!");
    }

    public void localizar() {
        System.out.println("Produto localizado com sucesso!");
    }
}
