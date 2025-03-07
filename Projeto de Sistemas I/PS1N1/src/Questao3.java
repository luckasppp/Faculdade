import java.util.ArrayList;
import javax.swing.JOptionPane;
public class Questao3 {
    public static void main(String[] args) {
        // Faça um programa que leia do teclado 5 números inteiros e armazene-os numa arraylist denominado BÁSICO.
        // Armazene os números múltiplos de dois em um segundo arraylist denominado MULTIPLOS_DE_DOIS e os demais
        // em um terceiro arraylist denominado DEMAIS. Ordene os vetores e imprima-os.

        ArrayList<Integer> basico = new ArrayList<>();
        ArrayList<Integer> multiplos_de_dois = new ArrayList<>();
        ArrayList<Integer> demais = new ArrayList<>();

        // Pede para o usuário os valores
        for (int i = 0; i < 5; i++) {
            basico.add(Integer.parseInt(JOptionPane.showInputDialog("Insira o " + (i+1) + " número:")));
        }

        // Ordena os valores do ArrayList Básico:
        int n = basico.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (basico.get(j) > basico.get(j + 1)) {
                    // Troca os elementos
                    int temp = basico.get(j);
                    basico.set(j, basico.get(j + 1));
                    basico.set(j + 1, temp);
                }
            }
        }   

        // Imprime os valores do ArrayList Básico (já ordenado).
        System.out.println("Os valores inseridos foram:");
        for (int elemento : basico) {
            System.out.print(elemento + "\t");
            if (elemento%2 == 0) {
                multiplos_de_dois.add(elemento);
            }
            else {
                demais.add(elemento);
            }
        }

        System.out.println("\n\nOs valores múltiplos de dois são:");
        for (int multiplos : multiplos_de_dois) {
            System.out.print(multiplos + "\t");
        }

        System.out.println("\n\nOs demais valores são:");
        for (int demaisValores : demais) {
            System.out.print(demaisValores + "\t");
        }
    
    }
}
