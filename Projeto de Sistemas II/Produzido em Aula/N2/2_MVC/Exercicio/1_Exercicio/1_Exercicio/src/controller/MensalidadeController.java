package controller;

import model.MensalidadeModel;
import view.MensalidadeView;
import java.util.*;

public class MensalidadeController {
    private ArrayList<MensalidadeModel> models = new ArrayList<>();
    private ArrayList<MensalidadeView> views = new ArrayList<>();

    public MensalidadeController() {
        this.models.add(new MensalidadeModel());
        this.views.add(new MensalidadeView(this));
    }

    public Date getData(int index) {
        return this.models.get(index).getData();
    }

    public void setData(int index, Date data) {
        this.models.get(index).setData(data);
    }

    public double getValor(int index) {
        return this.models.get(index).getValor();
    }

    public void setValor(int index, double valor) {
        this.models.get(index).setValor(valor);
    }

    public Date getDataPgto(int index) {
        return this.models.get(index).getDataPgto();
    }

    public void setDataPgto(int index, Date dataPgto) {
        this.models.get(index).setDataPgto(dataPgto);
    }

    public double getJuros(int index) {
        return this.models.get(index).getJuros();
    }

    public void setJuros(int index, double juros) {
        this.models.get(index).setJuros(juros);
    }

    public double getValorPago(int index) {
        return this.models.get(index).getValorPago();
    }

    public void setValorPago(int index, double valorPago) {
        this.models.get(index).setValorPago(valorPago);
    }

    public boolean isQuitMens(int index) {
        return this.models.get(index).isQuitMens();
    }

    public void setQuitMens(int index) {
        this.models.get(index).setQuitMens();
    }

    public void nova_view(){
        this.views.add(new MensalidadeView(this));
    }

    public ArrayList<MensalidadeModel> getModels() {
        return this.models;
    }

    public ArrayList<MensalidadeView> getViews() {
        return this.views;
    }
}
