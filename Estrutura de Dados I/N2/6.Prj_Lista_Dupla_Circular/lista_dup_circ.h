// lista_dup_circ.h

#include <iostream>
#include <cstdlib>

typedef struct lista_dup_circ {
	int info;
	struct lista_dup_circ* ant;
	struct lista_dup_circ* prox;
} No;

/* Funcoes auxiliares */
No* inicializa();
bool vazia(No* no);
int quantidade(No* no);
No* busca(No* no, int valor);

/* Funcoes de insercao/remocao */
No* insere_inicio(No* no, int valor);
No* insere_fim(No* no, int valor);
No* remove_valor(No* no, int valor);
No* remove_inicio(No* no);
No* remove_fim(No* no);
void liberar_recursivo(No* no);

/* Funcoes de impressao */
void imprime(No* no);
void imprime_reverso(No* no);
void imprime_inicio(No* no);
void imprime_fim(No* no);
