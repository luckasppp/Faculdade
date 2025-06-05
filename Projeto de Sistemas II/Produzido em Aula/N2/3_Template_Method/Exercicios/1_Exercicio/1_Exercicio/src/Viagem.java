public abstract class Viagem {
    public abstract void dia1();
    public abstract void dia2();
    public abstract void dia3();

    public void metodo_template() {
        System.out.println("Início da Viagem");
        dia1();
        dia2();
        dia3();
        System.out.println("Fim da Viagem");
    }
}
