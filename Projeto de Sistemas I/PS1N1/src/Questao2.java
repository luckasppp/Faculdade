// Faça um programa que receba três matrizes de mesmo tamanho (10 x 10) e retorne a multiplicação
// das duas primeiras mais a terceira. Ou seja, Matriz1 * Matriz2 + Matriz3 (considere para isso
// operações termo a termo). Os números das matrizes devem ser sorteados entre 80 e 100.

import java.text.DecimalFormat;

public class Questao2 {
    public static void main(String[] args) {
        int[][] mtx1 = new int[10][10];
        int[][] mtx2 = new int[10][10];
        int[][] mtx3 = new int[10][10];
        int[][] mtxResultado = new int[10][10];

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                mtx1[i][j] = (int) ((Math.random()*21)+80);
                mtx2[i][j] = (int) ((Math.random()*21)+80);
                mtx3[i][j] = (int) ((Math.random()*21)+80);
            }
        }
        DecimalFormat formatacao = new DecimalFormat();
        formatacao.applyPattern("000");
        
        // Imprimindo as matrizes:
        System.out.println("Matriz 1: \t\t\t\t\t\t\t\t\tMatriz 2: \t\t\t\t\t\t\t\t\tMatriz 3:");
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < mtx1[i].length; j++) {
                System.out.print(formatacao.format(mtx1[i][j]) + "\t");
            }
            System.out.print("\t");
            for (int j = 0; j < mtx2[i].length; j++) {
                System.out.print(formatacao.format(mtx2[i][j]) + "\t");
            }
            System.out.print("\t");
            for (int j = 0; j < mtx3[i].length; j++) {
                System.out.print(formatacao.format(mtx3[i][j]) + "\t");
            }
            System.out.print("\n");
        }

        System.out.println("\n\nMultiplicando a matriz 1 e 2 e depois somando as matriz 3: ");
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                mtxResultado[i][j] = mtx1[i][j]*mtx2[i][j]+mtx3[i][j];
                System.out.print(mtxResultado[i][j] + "\t");
            }
            System.out.print("\n");
        }
    }
}
