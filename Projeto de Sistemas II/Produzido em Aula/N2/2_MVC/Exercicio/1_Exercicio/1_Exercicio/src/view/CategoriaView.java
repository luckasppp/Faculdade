package view;

import controller.CategoriaController;

public class CategoriaView {
    public CategoriaController controller;

    public CategoriaView(CategoriaController controller) {
        this.controller = controller;
    }

    public void req_get_descricao() {
        System.out.println("Categoria: " + this.controller.getDescricao());
    }

    public void req_set_descricao(String valor) {
        this.controller.setDescricao(valor);
    }
}