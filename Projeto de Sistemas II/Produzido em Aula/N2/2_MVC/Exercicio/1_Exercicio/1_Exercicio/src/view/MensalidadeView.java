package view;

import controller.MensalidadeController;

public class MensalidadeView {
    private MensalidadeController controller;

    public MensalidadeView(MensalidadeController controller) {
        this.controller = controller;
    }

    public void displayMensalidadeDetails(int index) {
        System.out.println("Data: " + controller.getData(index));
        System.out.println("Valor: " + controller.getValor(index));
        System.out.println("Data de Pagamento: " + controller.getDataPgto(index));
        System.out.println("Juros: " + controller.getJuros(index));
        System.out.println("Valor Pago: " + controller.getValorPago(index));
        System.out.println("Quitada: " + controller.isQuitMens(index));
    }

    public void updateMensalidade(int index, String data, double valor, String dataPgto, double juros, double valorPago, boolean quitada) {
        controller.setData(index, java.sql.Date.valueOf(data));
        controller.setValor(index, valor);
        controller.setDataPgto(index, java.sql.Date.valueOf(dataPgto));
        controller.setJuros(index, juros);
        controller.setValorPago(index, valorPago);
        if (quitada) {
            controller.setQuitMens(index);
        }
    }

    public void listarMensalidades() {
        for (int i = 0; i < controller.getModels().size(); i++) {
            System.out.println("Mensalidade " + (i + 1) + ":");
            displayMensalidadeDetails(i);
            System.out.println("-----------------------------");
        }
    }
}
