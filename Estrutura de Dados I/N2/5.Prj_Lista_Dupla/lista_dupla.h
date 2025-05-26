// lista_dupla.h

#include <iostream>
#include <cstdlib>

typedef struct lista_dupla {
	int info;
	struct lista_dupla* ant;
	struct lista_dupla* prox;
} No;

/* Funcoes auxiliares */
No* inicializa(); // ok
bool vazia(No* no); // ok
int quantidade(No* no); // ok
No* busca(No* no, int valor); // ok

/* Funcoes de insercao/remocao */
No* insere_inicio(No* no, int valor); // ok
No* insere_fim(No* no, int valor); // ok
No* remove_valor(No* no, int valor);
No* remove_inicio(No* no); // ok
No* remove_fim(No* no); // ok
void liberar_recursivo(No* no); // ok

/* Funcoes de impressao */
void imprime(No* no); // ok
void imprime_reverso(No* no); // ok
void imprime_inicio(No* no); // ok
void imprime_fim(No* no); // ok
