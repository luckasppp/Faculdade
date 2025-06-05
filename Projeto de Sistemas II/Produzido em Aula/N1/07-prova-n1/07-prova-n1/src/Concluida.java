public class Concluida implements EstadoLocacao {
    public String dataFim;
    public String dataInicio;

    @Override
    public void mudarEstado(Locacao locacao) {
        locacao.estado = new Agendado();
        System.out.println("Sua locação está Agendada.");
    }
}