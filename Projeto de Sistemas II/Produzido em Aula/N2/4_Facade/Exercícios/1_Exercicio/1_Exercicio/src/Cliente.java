public class Cliente {
    private String nome;
    private int idade;
    private OrganizadorEvento evento = new OrganizadorEvento();

    Cliente (String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
    }

    public void solicitarCasamento() {
        evento.realizarCasamento();
    }

    public void solicitarFestaAniversario() {
        evento.realizarFestaAniversario();
    }

    public void solicitarFestaFormatura() {
        evento.realizarFestaFormatura();
    }

    public void solicitarPalestra() {
        evento.realizarPalestra();
    }

    public void solicitarHospedagem() {
        evento.realizarHospedagem();
    }

    // Getters e Setters

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    
}
