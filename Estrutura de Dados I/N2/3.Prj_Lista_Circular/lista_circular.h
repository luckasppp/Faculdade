// lista_circular.h

#include <iostream>
#include <cstdlib>

typedef struct lista {
	int info;
	struct lista* prox;
} No;

/* Funcoes auxiliares */
No* inicializa();
bool vazia(No* no);
int quantidade(No* no);
No* busca(No* no, int valor);

/* Funcoes de insercao/remocao */
No* insere_inicio(No* no, int valor);
No* insere_fim(No* no, int valor);
No* retira(No* no, int valor);
No* retira_inicio(No* no);
No* retira_fim(No* no);
void liberar_recursivo(No* atual, No* inicio);
No* inicio_liberar_recursivo(No* ultimo);

/* Funcoes de impressao */
void imprime(No* no);
void imprime_inicio(No* no);
void imprime_fim(No* no);
