public class Cliente implements DAO {
    private int codigo;
    private String nome;

    public void inserir() {
        System.out.println("Cliente inserido com sucesso!");
    }

    public void excluir() {
        System.out.println("Cliente excluído com sucesso!");
    }

    public void localizar() {
        System.out.println("Cliente localizado com sucesso!");
    }

}
