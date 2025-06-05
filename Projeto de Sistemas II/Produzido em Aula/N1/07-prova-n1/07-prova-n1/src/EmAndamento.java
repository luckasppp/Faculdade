public class EmAndamento implements EstadoLocacao {
    public String dataFimPrev;
    public String dataInicio;

    @Override
    public void mudarEstado(Locacao locacao) {
        locacao.estado = new Concluida();
        System.out.println("Sua locação finalizou e está concluída.");
        
    }
}
