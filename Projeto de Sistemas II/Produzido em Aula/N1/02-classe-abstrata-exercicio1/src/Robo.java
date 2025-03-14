public class Robo implements Controle {
    @Override
    public void andar() {
        System.out.println("Robo andando");
    }

    @Override
    public void virar() {
        System.out.println("Robo virando");
    }

    @Override
    public void falar() {
        System.out.println("Robo falando");
    }
}
