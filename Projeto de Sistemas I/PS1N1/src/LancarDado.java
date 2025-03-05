public class LancarDado {
    // Crie um programa que simule a jogada de um dado de seis lados (números de 1 a 6) por seis vezes.
    // Ao final, some os valores sorteados que são números primos apenas e apresente o resultado na tela.
    public static void main(String[] args) {

        int[] lancamentos = new int[6];
        int soma = 0;

        System.out.println("Os números lançados são: ");
        for (int i = 0; i < 6; i++) {
            lancamentos[i] = (int) ((Math.random()*6)+1);
            System.out.print(lancamentos[i] + "\t");

            if (lancamentos[i] == 2) {
                soma += lancamentos[i];
            }
            if (lancamentos[i]%2 != 0 && lancamentos[i]> 2) {
                soma += lancamentos[i];
            }
        }

        System.out.println("\n\nA soma dos números primos: " + soma);
    }
}