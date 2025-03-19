public class Fornecedor implements DAO {
    private int ccnpj;
    private String razaoSocial;

    public void inserir() {
        System.out.println("Fornecedor inserido com sucesso!");
    }

    public void excluir() {
        System.out.println("Fornecedor excluído com sucesso!");
    }

    public void localizar() {
        System.out.println("Fornecedor localizado com sucesso!");
    }

}
