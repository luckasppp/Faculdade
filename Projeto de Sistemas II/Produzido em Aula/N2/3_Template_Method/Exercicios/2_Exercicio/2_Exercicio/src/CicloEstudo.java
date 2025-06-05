public abstract class CicloEstudo {
    public abstract String passo_1();
    public abstract String passo_2();
    public abstract String passo_3();

    public void realizar() {
        System.out.println(passo_1());
        System.out.println(passo_2());
        System.out.println(passo_3());
    }
}
