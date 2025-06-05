// vetor.h

#ifndef VETOR_H
#define VETOR_H

typedef struct {
    int *dados;
    int tamanho;
} Vetor;

void inicializar(Vetor* vetor);
void liberar(Vetor* vetor);
void insere_fim(Vetor* vetor, int valor);
void insere_inicio(Vetor* vetor, int valor);
int busca_sequencial(Vetor* vetor, int valor);
int busca_binaria(Vetor* vetor, int valor);
void ordena_bubblesort(Vetor* vetor);
void imprimir_rec(Vetor* vetor, int index);

#endif
