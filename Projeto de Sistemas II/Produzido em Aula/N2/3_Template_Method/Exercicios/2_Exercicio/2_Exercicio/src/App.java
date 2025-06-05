public class App {
    public static void main(String[] args) throws Exception {
        CursoPreparacao curso1 = new CursoPreparacao(new CicloBasico());
        curso1.realizar();

        CursoPreparacao curso2 = new CursoPreparacao(new CicloIntermediario());
        curso2.realizar();

        CursoPreparacao curso3 = new CursoPreparacao(new CicloAvancado());
        curso3.realizar();
    }
}
