package controller;

import model.CategoriaModel;
import view.CategoriaView;
import java.util.*;

public class CategoriaController {
    public ArrayList<CategoriaView> view = new ArrayList<>();
    public CategoriaModel model;

    public CategoriaController() {
        this.model = new CategoriaModel();
        this.view.add(new CategoriaView(this));
    }

    public String getDescricao() {
        return this.model.getDescricao();
    }

    public void setDescricao(String novaDescricao) {
        this.model.setDescricao(novaDescricao);
    }
}
