package model;

public class DependenteModel {
    private long cartao;
    private String nome;
    private String parentesco;
    private String email;
    private SocioModel socioTitular;

    public DependenteModel (long cartao, String nome, String parentesco, SocioModel socioTitular) {
        if (socioTitular == null) {
            throw new IllegalArgumentException("Dependente deve estar associado a um sócio titular.");
        }

        this.cartao = cartao;
        this.nome = nome;
        this.parentesco = parentesco;
        this.socioTitular = socioTitular;
    }

    public long getCartao() {
        return this.cartao;
    }

    public void setCartao(long cartao) {
        this.cartao = cartao;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getParentesco() {
        return parentesco;
    }

    public void setParentesco(String parentesco) {
        this.parentesco = parentesco;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public SocioModel getSocioTitular() {
        return this.socioTitular;
    }

    public void setSocioTitular(SocioModel socioTitular) {
        if (socioTitular == null) {
            throw new IllegalArgumentException("Sócio titular não pode ser nulo.");
        }

        this.socioTitular = socioTitular;
    }
    
}
