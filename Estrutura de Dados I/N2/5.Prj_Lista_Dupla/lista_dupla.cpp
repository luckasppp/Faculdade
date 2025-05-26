// lista_dupla.cpp

#include "lista_dupla.h"

using namespace std;

/* Funcoes auxiliares */
No* inicializa() {
	return NULL;
}

bool vazia(No* no) {
	return no == NULL;
}

int quantidade(No* no) {
	int cont = 0;

	for(No* aux = no; aux != NULL; aux = aux->prox) {
		cont++;
	}
	
	return cont;
}

No* busca(No* no, int valor) {
	for(No* aux = no; aux != NULL; aux = aux->prox) {
		if(aux->info == valor) {
			return aux;
		}
	}
	
	return NULL;
}

/* Funcoes de insercao/remocao */
No* insere_inicio(No* no, int valor) {
	No* novo = (No*) malloc(sizeof(No));
	novo->info = valor;
	novo->ant = NULL;
	novo->prox = no;
	
	if(no != NULL) {
		no->ant = novo;
	}
	
	return novo;
}

No* insere_fim(No* no, int valor) {
	if(vazia(no)) {
		return insere_inicio(no, valor);
	}
	
	No* novo = (No*) malloc(sizeof(No));
	novo->info = valor;
	novo->prox = NULL;
	
	No* aux = no;
	for(; aux->prox != NULL; aux = aux->prox) {
		/* Estrutura para avançar */
	}
	
	aux->prox = novo;
	novo->ant = aux;
	
	return no;
}

No* remove_valor(No* no, int valor) {
	No* procurado = busca(no, valor);
	
	/* Caso nao encontre */
	if(procurado == NULL) {
		cout << "O valor não foi encontrado." << endl;
		return no;
	}
	
	/* Retirando elementos da lista */
	
	if(procurado == no) { /* Caso seja o primeiro elemento */
		no = procurado->prox; // Atualiza o prox para apontar pro proximo elemento ou pra null.
	} else { /* Caso seja ultimo elemento ou intermediario */
		procurado->ant->prox = procurado->prox; // Faz o bypass do elemento anterior com o elemento posterior.
	}
	
	if(procurado->prox != NULL) { /* Caso haja proximo, atualiza o ant do proximo */
		procurado->prox->ant = procurado->ant; // atualiza o ant do proximo elemento com o elemento anterior ao procurado.
	}
	
	free(procurado);
	
	return no;
}

No* remove_inicio(No* no) {
	if(vazia(no)) {
		cout << "Lista vazia! Nada para remover." << endl;
		return no;
	}
	
	/* Verifica se so tem um elemento */
	if(no->prox == NULL) {
		free(no);
		return NULL;
	}

	No* aux = no->prox;
	aux->ant = NULL;
	free(no);
	
	return aux;	
}

No* remove_fim(No* no) {
	if(vazia(no)) {
		cout << "Lista vazia! Nada para remover." << endl;
		return no;
	}
	
	/* Verifica se so tem um elemento */
	if(no->prox == NULL) {
		free(no);
		return NULL;
	}
	
	No* aux = no;
	for(; aux->prox != NULL; aux = aux->prox) {
		/* Estrutura para avançar */
	}
	
	No* novo_ultimo = aux->ant;
	novo_ultimo->prox = NULL;
	free(aux);
	
	return no;
}

void liberar_recursivo(No* no) {
	/* Caso base: lista vazia ou chegou ao fim */
	if (no == NULL) {
		return;
	}

	/* Libera o nó atual após a chamada recursiva */
	liberar_recursivo(no->prox);  // Chamada recursiva para o próximo nó

	/* Libera o nó atual após a chamada recursiva */
	free(no);
}

/* Funcoes de impressao */
void imprime(No* no) {
	if(vazia(no)) {
		cout << "Lista vazia!" << endl;
		return;
	}
	
	No* aux = no;
	for(; aux != NULL; aux = aux->prox) {
		cout << aux->info;
		if(aux->prox != NULL) {
			cout << " - ";
		}
	}
	cout << endl;
}

void imprime_reverso(No* no) {
	if(vazia(no)) {
		cout << "Lista vazia!" << endl;
		return;
	}
	
	No* aux = no;
	
	for(; aux->prox != NULL; aux = aux->prox) {
		/* Percorre ate o ultimo no */
	}
	
	for(; aux != NULL; aux = aux->ant) {
		cout << aux->info;
		if(aux->ant != NULL) {
			cout << " - ";
		}
	}
	cout << endl;
}

void imprime_inicio(No* no) {
	if(vazia(no)) {
		cout << "Lista vazia!" << endl;
		return;
	}
	cout << no->info << endl;
}

void imprime_fim(No* no) {
	if(vazia(no)) {
		cout << "Lista vazia!" << endl;
		return;
	}
	
	No* aux = no;
	for(; aux->prox != NULL; aux = aux->prox) {
		/* Percorre ate o ultimo no */
	}
	
	cout << aux->info << endl;
}
