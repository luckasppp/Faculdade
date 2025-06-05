public class App {
    public static void main(String[] args) throws Exception {
        AgenciaViagem viagem1 = new AgenciaViagem(new ViagemHistorica());
        AgenciaViagem viagem2 = new AgenciaViagem(new ViagemCampestre());
        AgenciaViagem viagem3 = new AgenciaViagem(new ViagemPraia());
        viagem1.organizar_viagem();
        viagem2.organizar_viagem();
        viagem3.organizar_viagem();
    }
}
