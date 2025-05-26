// lista.h
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct lista {
	int info;
	struct lista* prox;
} No;

/* Funcoes auxiliares */
No* inicializa();
bool vazia(No* no);
int tamanho(No* no);
No* busca(No* no, int valor);
No* libera(No* no);

/* Funcoes de insercao/remocao */
No* insere_inicio(No* no, int valor);
No* insere_fim(No* no, int valor);
No* retira(No* no, int valor);
No* retira_inicio(No* no);
// No* retira_fim(No* no);

/* Funcoes de impressao */
void imprime_lista(No* no);
void imprime_inicio(No* no);
void imprime_fim(No* no);
int valor_inicio(No* no);
//int valor_fim(No* no);


