package controller;

import model.SocioModel;
import model.CategoriaModel;
import view.SocioView;

import java.util.ArrayList;

public class SocioController {
    private ArrayList<SocioModel> socios;
    public SocioView view;

    public SocioController() {
        this.socios = new ArrayList<>();
        this.view = new SocioView(this);
    }

    public void registrarSocio(SocioModel socio) {
        socios.add(socio);
    }

    public String dadosSocio(long cartaoSocio) {
        SocioModel socio = buscarSocio(cartaoSocio);
        return (socio != null) ? socio.consSocio() : "Sócio não encontrado!";
    }

    public ArrayList<SocioModel> listaSocios() {
        return socios;
    }

    public SocioModel buscarSocio(long cartaoSocio) {
        for (SocioModel socio : socios) {
            if (socio.getCartaoSocio() == cartaoSocio) {
                return socio;
            }
        }
        return null;
    }

    public String updateSocio(long cartaoSocio, String nome, String endereco, String telefone, String email,
            CategoriaModel categoria) {
        SocioModel socio = buscarSocio(cartaoSocio);
        if (socio == null)
            return "Sócio não encontrado!";

        socio.setNome(nome);
        socio.setEndereco(endereco);
        socio.setTelefone(telefone);
        socio.setEmail(email);
        socio.setCategoria(categoria);

        return "Sócio atualizado com sucesso!";
    }

    public String deleteSocio(long cartaoSocio) {
        SocioModel socio = buscarSocio(cartaoSocio);
        if (socio == null)
            return "Sócio não encontrado!";

        socios.remove(socio);
        return "Sócio removido com sucesso!";
    }
}
