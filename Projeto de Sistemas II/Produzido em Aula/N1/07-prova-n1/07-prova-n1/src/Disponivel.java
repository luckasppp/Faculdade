public class Disponivel implements EstadoContainer{
    @Override
    public void mudarEstado(Container container) {
        container.estado = new EmManutencao();
        System.out.println("Seu container entrou em Manutenção");
    }
}
