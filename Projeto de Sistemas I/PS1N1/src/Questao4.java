import javax.swing.JOptionPane;
public class Questao4 {
    public static void main (String[] args) {
        //  Escreva um programa que leia um número inteiro não negativo n, em seguida leia os tais n números.
        //  Aplique o tratamento de exceção necessário e não permita que o programa seja concluído até o que
        //  o usuário informe os números na quantidade correta.
        
        int cod = 0;
        int n = Integer.parseInt(JOptionPane.showInputDialog("Insira a quantidade de números a serem inseridos:"));

        do {
            try {
                int valor = Integer.parseInt(JOptionPane.showInputDialog("Insira o " + (cod+1) + " valor:"));
            }
            catch (NumberFormatException erro) {
                JOptionPane.showMessageDialog(null, "O valor inserido precisa ser número inteiro positivo!");
                cod = cod - 1;
            }
            cod++;
        } while (cod < n);
    }
}