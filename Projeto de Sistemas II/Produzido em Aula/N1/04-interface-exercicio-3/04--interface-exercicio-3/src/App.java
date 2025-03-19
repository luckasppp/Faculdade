public class App {
    public static void main(String[] args) throws Exception {
        Cliente cliente = new Cliente();
        cliente.inserir();
        cliente.excluir();
        cliente.localizar();

        Fornecedor fornecedor = new Fornecedor();
        fornecedor.inserir();
        fornecedor.excluir();
        fornecedor.localizar();

        Produto produto = new Produto();
        produto.inserir();
        produto.excluir();
        produto.localizar();
    }
}
