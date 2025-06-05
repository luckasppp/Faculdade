public class Agendado implements EstadoLocacao{
    public String dataInicioPrev;
    public String dataInicioEfetivo;

    @Override
    public void mudarEstado(Locacao locacao) {
        locacao.estado = new EmAndamento();
        System.out.println("Sua locação iniciou e está em andamento.");
    }
}