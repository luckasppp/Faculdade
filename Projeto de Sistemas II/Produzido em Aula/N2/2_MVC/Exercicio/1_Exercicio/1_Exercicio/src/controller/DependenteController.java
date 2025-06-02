package controller;

import model.DependenteModel;
import model.SocioModel;
import view.DependenteView;
import java.util.*;

public class DependenteController {
    private DependenteModel model;
    private ArrayList<DependenteView> views = new ArrayList<>();

    public DependenteController(long cartao, String nome, String parentesco, SocioModel socioTitular) {
        this.model = new DependenteModel(0, null, null, null);
        this.views.add(new DependenteView(this));
    }

    public long getCartaDependente() {
        return this.model.getCartao();
    }

    public void setCartaoDependente(long novoCartao) {
        this.model.setCartao(novoCartao);
    }

    public String getNomeDependente() {
        return this.model.getNome();
    }

    public void setNomeDependente(String novoNome) {
        this.model.setNome(novoNome);
    }

    public String getParentescoDependente() {
        return this.model.getParentesco();
    }

    public void setParentescoDependente(String novoParentesco) {
        this.model.setParentesco(novoParentesco);
    }

    public SocioModel getSocioTitularDependente() {
        return this.model.getSocioTitular();
    }

    public void setSocioTitularDependente(SocioModel novoSocioTitular) {
        this.model.setSocioTitular(novoSocioTitular);
    }

    public SocioModel getSocio() {
        return this.model.getSocioTitular();
    }

    public void nova_view(){
        this.views.add(new DependenteView(this));
    }
}
