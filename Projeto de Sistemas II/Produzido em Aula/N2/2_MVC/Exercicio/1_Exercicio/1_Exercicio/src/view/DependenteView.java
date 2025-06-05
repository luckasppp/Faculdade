package view;

import controller.DependenteController;
import model.SocioModel;

public class DependenteView {
    private DependenteController controller;

    public DependenteView(DependenteController controler) {
        this.controller = controler;
    }

    public void req_get_carteira() {
        System.out.println("Carteira: " + this.controller.getCartaDependente());
    }
    public void req_set_carteira(long novaCarteira){
        this.controller.setCartaoDependente(novaCarteira);
    }

    public void req_get_nome() {
        System.out.println("Nome: " + this.controller.getNomeDependente());
    }
    public void req_set_nome(String novoNome){
        this.controller.setNomeDependente(novoNome);
    }

    public void req_get_parentesco() {
        System.out.println("Parentesco: " + this.controller.getParentescoDependente());
    }
    public void req_set_parentesco(String novoParentesco){
        this.controller.setParentescoDependente(novoParentesco);
    }

    public void req_get_socio() {
        System.out.println("Socio Titular: " + this.controller.getSocio().getNome());
    }
    public void req_set_socio(SocioModel socioModel){
        this.controller.setSocioTitularDependente(socioModel);
    }

    public void update() {
        System.out.println("Dados dependente:");
        req_get_carteira();
        req_get_nome();
        req_get_parentesco();
        req_get_socio();
    }
}
