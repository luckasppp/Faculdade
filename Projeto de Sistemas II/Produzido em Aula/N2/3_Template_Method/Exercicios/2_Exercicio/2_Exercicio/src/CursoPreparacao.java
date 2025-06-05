public class CursoPreparacao {
    private CicloEstudo ciclo;

    public CursoPreparacao(CicloEstudo ciclo) {
        this.ciclo = ciclo;
    }

    public void realizar() {
        ciclo.realizar();
    }
}
