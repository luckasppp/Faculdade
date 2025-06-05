import hotel.Hotel;
import alimentacao.Alimentacao;
import musica.Musica;
import florista.Florista;

public class OrganizadorEvento {
    private Hotel h;
    private Alimentacao a;
    private Musica m;
    private Florista f;

    OrganizadorEvento() {
        this.h = new Hotel();
        this.a = new Alimentacao();
        this.m = new Musica();
        this.f = new Florista();
    }

    public void realizarCasamento() {
        System.out.println("\nInício Casamento!");

        System.out.println();

        System.out.println("Preparando Casamento:");
        this.h.limparAuditorio();
        this.h.organizarCadeiras();
        this.f.floresVermelhas();
        this.h.limparSalaoFesta();
        this.h.organizarCadeiras();
        this.h.organizarMesas();
        this.f.floresDiversas();

        System.out.println();

        System.out.println("Realizando Cerimônia de Casamento:");
        this.m.tocarRelachante();
        this.a.servirBrunch();
        this.a.servirCafe();
        this.m.tocarMachaNupicial();
        this.m.tocarAleatorio();
        System.out.println();
        System.out.println("\nFim Casamento!");

    }

    public void realizarFestaAniversario() {
        System.out.println("\nInício Festa de Aniversário!\n");

        System.out.println("Preparando Espaço:");
        this.h.prepararSalaoFesta();
        this.h.organizarMesas();
        this.h.organizarCadeiras();
        this.f.floresAmarelas();

        System.out.println("\nDurante a Festa:");
        this.m.tocarPop();
        this.a.servirRefrigerante();
        this.a.servirBolo();
        this.a.servirAlmoco();

        System.out.println("\nFim Festa de Aniversário!\n");
    }

    public void realizarFestaFormatura() {
        System.out.println("\nInício Festa de Formatura!\n");

        System.out.println("Preparando Espaço:");
        this.h.prepararSalaoFesta();
        this.h.organizarMesas();
        this.h.organizarCadeiras();
        this.f.floresDaEstacao();

        System.out.println("\nDurante a Festa:");
        this.m.tocarRock();
        this.a.servirJanta();
        this.a.servirBebidasAlcoolicas();

        System.out.println("\nFim Festa de Formatura!\n");
    }

    public void realizarPalestra() {
        System.out.println("\nInício Palestra!\n");

        System.out.println("Preparando Espaço:");
        this.h.prepararAuditorio();
        this.h.organizarCadeiras();
        this.f.floresLaranjas();

        System.out.println("\nDurante a Palestra:");
        this.a.servirCafe();
        this.m.tocarRelachante();

        System.out.println("\nFim da Palestra!\n");
    }

    public void realizarHospedagem() {
        System.out.println("\nInício Hospedagem!\n");

        this.h.fazerReserva();
        this.h.prepararQuarto();
        this.h.fazerCheckIn();
        this.a.solicitarComidaQuarto();
        this.h.fazerCheckOut();

        System.out.println("\nFim Hospedagem!\n");
    }
}
