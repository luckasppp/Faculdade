package model;
import java.util.Date;

public class MensalidadeModel {
    private Date data;
    private double valor;
    private Date dataPgto;
    private double juros;
    private double valorPago;
    private boolean quitMens = false;

    public Date getData() {
        return this.data;
    }

    public void setData(Date data) {
        this.data = data;
    }

    public double getValor() {
        return this.valor;
    }

    public void setValor(double valor) {
        this.valor = valor;
    }

    public Date getDataPgto() {
        return this.dataPgto;
    }

    public void setDataPgto(Date dataPgto) {
        this.dataPgto = dataPgto;
    }

    public double getJuros() {
        return this.juros;
    }

    public void setJuros(double juros) {
        this.juros = juros;
    }

    public double getValorPago() {
        return this.valorPago;
    }

    public void setValorPago(double valorPago) {
        this.valorPago = valorPago;
    }

    public boolean isQuitMens() {
        return this.quitMens;
    }

    public void setQuitMens() {
        if (this.quitMens == true) {
            this.quitMens = false; 
        } else {
            this.quitMens = true;
        }
    }
}
