// lista.h
#include <stdlib.h>
#include <iostream>

using namespace std;

typedef struct _no {
	int info;
	struct _no* prox;
} No;

No* inicializa();
No* insere_inicio(No* no, int valor);
No* insere_fim(No* no, int valor);
void imprime_lista(No* no);
bool vazia(No* no);
void imprime_inicio(No* no);
void imprime_fim(No* no);
No* busca(No* no, int valor);
No* retira(No* no, int valor);
No* libera(No* no);
No* retira_inicio(No* no);
int tamanho(No* no);
