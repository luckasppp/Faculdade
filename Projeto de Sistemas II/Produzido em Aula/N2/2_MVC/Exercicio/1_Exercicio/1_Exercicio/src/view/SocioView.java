package view;

import controller.SocioController;
import model.SocioModel;
import model.CategoriaModel;

public class SocioView {
    private SocioController controller;

    public SocioView(SocioController controller) {
        this.controller = controller;
    }

    public void registrarSocio(String nome, String endereco, String telefone, String email, String descricaoCategoria) {
        CategoriaModel categoria = new CategoriaModel();
        categoria.setDescricao(descricaoCategoria);

        SocioModel socio = new SocioModel();
        socio.setNome(nome);
        socio.setEndereco(endereco);
        socio.setTelefone(telefone);
        socio.setEmail(email);
        socio.setCategoria(categoria);

        controller.registrarSocio(socio);
        System.out.println("Sócio registrado com sucesso! Cartão nº " + socio.getCartaoSocio());
    }

    public void consultarSocio(long cartao) {
        String dados = controller.dadosSocio(cartao);
        System.out.println(dados);
    }

    public void atualizarSocio(long cartao, String nome, String endereco, String telefone, String email,
            String descricaoCategoria) {
        CategoriaModel categoria = new CategoriaModel();
        categoria.setDescricao(descricaoCategoria);

        String msg = controller.updateSocio(cartao, nome, endereco, telefone, email, categoria);
        System.out.println(msg);
    }

    public void excluirSocio(long cartao) {
        String resultado = controller.deleteSocio(cartao);
        System.out.println(resultado);
    }

    public void listarSocios() {
        for (SocioModel socio : controller.listaSocios()) {
            System.out.println(socio.consSocio());
        }
    }
}
