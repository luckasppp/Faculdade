public class EmManutencao implements EstadoContainer{
    @Override
    public void mudarEstado(Container container) {
        container.estado = new Disponivel();
        System.out.println("Seu container está disponível");
    }
}