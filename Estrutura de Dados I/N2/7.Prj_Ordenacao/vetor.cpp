// vetor.cpp

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "vetor.h"

void inicializar(Vetor* vetor) {
    vetor->dados = NULL;
    vetor->tamanho = 0;
}

void liberar(Vetor* vetor) {
    free(vetor->dados);
    vetor->dados = NULL;
    vetor->tamanho = 0;
}

void insere_fim(Vetor* vetor, int valor) {
    vetor->dados = (int*) realloc(vetor->dados, (vetor->tamanho + 1) * sizeof(int));
    vetor->dados[vetor->tamanho] = valor;
    vetor->tamanho++;
}

void insere_inicio(Vetor* vetor, int valor) {
    vetor->dados = (int*) realloc(vetor->dados, (vetor->tamanho + 1) * sizeof(int));
    for (int i = vetor->tamanho; i > 0; i--) {
        vetor->dados[i] = vetor->dados[i - 1];
    }
    vetor->dados[0] = valor;
    vetor->tamanho++;
}

int busca_sequencial(Vetor* vetor, int valor) {
    for (int i = 0; i < vetor->tamanho; i++) {
        if (vetor->dados[i] == valor) return 1;
    }
    return 0;
}

void ordena_bubblesort(Vetor* vetor) {
    for (int i = 0; i < vetor->tamanho - 1; i++) {
        for (int j = 0; j < vetor->tamanho - i - 1; j++) {
            if (vetor->dados[j] > vetor->dados[j + 1]) {
                int temp = vetor->dados[j];
                vetor->dados[j] = vetor->dados[j + 1];
                vetor->dados[j + 1] = temp;
            }
        }
    }
}

int busca_binaria(Vetor* vetor, int valor) {
    Vetor copia;
    inicializar(&copia);
    copia.tamanho = vetor->tamanho;
    copia.dados = (int*) malloc(vetor->tamanho * sizeof(int));
    for (int i = 0; i < vetor->tamanho; i++) copia.dados[i] = vetor->dados[i];
    ordena_bubblesort(&copia);

    int inicio = 0, fim = copia.tamanho - 1;
    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (copia.dados[meio] == valor) {
            liberar(&copia);
            return 1;
        }
        if (copia.dados[meio] < valor) inicio = meio + 1;
        else fim = meio - 1;
    }
    liberar(&copia);
    return 0;
}

void imprimir_rec(Vetor *vetor, int index) {
    if (index < vetor->tamanho) {
        printf("%d\n", vetor->dados[index]);
        imprimir_rec(vetor, index + 1);
    }
}

