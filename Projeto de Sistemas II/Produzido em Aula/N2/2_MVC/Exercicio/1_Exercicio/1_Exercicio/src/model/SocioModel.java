package model;

import java.util.*;

public class SocioModel {
    private static long contador = 1;

    private long cartaoSocio;
    private String nome;
    private String endereco;
    private String telefone;
    private String email;
    private CategoriaModel categoria;
    private List<DependenteModel> dependentes;


    public SocioModel() {
        this.cartaoSocio = contador++;
        this.dependentes =  new ArrayList<>();
    }

    public String consSocio() {
        return "Cartão Sócio: " + cartaoSocio + "\n"
                + "Nome: " + nome + "\n"
                + "Endereço: " + endereco + "\n"
                + "Telefone: " + telefone + "\n"
                + "E-mail: " + email + "\n"
                + "Categoria: " + (categoria != null ? categoria.getDescricao() : "N/A") + "\n";
    }

    // Getters e Setters
    public long getCartaoSocio() {
        return cartaoSocio;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public CategoriaModel getCategoria() {
        return categoria;
    }

    public void setCategoria(CategoriaModel categoria) {
        this.categoria = categoria;
    }

    public void addDependente(DependenteModel dependente) {
        this.dependentes.add(dependente);
    }

    public void exibirDependentes() {
        int cont = 0;
        if(dependentes.size() == 0) {
            System.out.println(cont + " dependentes.");
            return;
        }

        for (DependenteModel dependente : this.dependentes) {
            cont++;
            System.out.println("Dependente " + cont + ": " + dependente.getNome());
        }
    }
}
