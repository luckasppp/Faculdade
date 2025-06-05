public class AgenciaViagem {
    private Viagem tipoViagem;


    public AgenciaViagem(Viagem tipoViagem) {
        this.tipoViagem = tipoViagem;
    }

    public void organizar_viagem() {
        this.tipoViagem.metodo_template();
    }
}
