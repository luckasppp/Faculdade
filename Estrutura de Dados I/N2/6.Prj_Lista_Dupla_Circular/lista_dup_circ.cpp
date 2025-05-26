// lista_dup_circ.cpp

#include "lista_dup_circ.h"

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
	
	if(vazia(no)) {
		return cont;
	}
	
	No* aux = no;
	
	do {
		cont++;
		aux = aux->prox;
	} while (aux != no);
	
	return cont;
}

No* busca(No* no, int valor) {
	if(vazia(no)) {
		return NULL;
	}
	
	No* aux = no;
	
	do {
		if(aux->info == valor) {
			return aux;
		}
		
		aux = aux->prox;
	} while (aux != no);
	
	return NULL;
}

/* Funcoes de insercao/remocao */
No* insere_inicio(No* no, int valor) {
	No* novo = (No*) malloc(sizeof(No));
	novo->info = valor;
	
	if(vazia(no)) {
		novo->prox = novo;
		novo->ant = novo;
		return novo;
	}
	
	novo->prox = no;
	novo->ant = no->ant;
	
	no->ant->prox = novo;
	no->ant = novo;
	
	return novo;
}

No* insere_fim(No* no, int valor) {
	No* novo = (No*) malloc(sizeof(No));
	novo->info = valor;
	
	if(vazia(no)) {
		novo->prox = novo;
		novo->ant = novo;
		return novo;
	}
	
	novo->prox = no;
	novo->ant = no->ant;
	
	no->ant->prox = novo;
	no->ant = novo;
	
	return no;
}

No* remove_valor(No* no, int valor) {
	No* procurado = busca(no, valor);
	
	if(procurado == NULL) {
		cout << "Valor nao encontrado." << endl;
		return no;
	}
	
	if(procurado == no) {
		return remove_inicio(no);
	}
	
	procurado->ant->prox = procurado->prox;
	procurado->prox->ant = procurado->ant;
	
	free(procurado);
	
	return no;
}

No* remove_inicio(No* no) {
	if(vazia(no)) {
		return no;
	}
	
	if(no->prox == no) {
		free(no);
		return NULL;
	}
	
	No* ini = no->prox;
	
	ini->ant = no->ant;
	no->ant->prox = ini;
	
	free(no);
	
	return ini;
}

No* remove_fim(No* no) {
	if(vazia(no)) {
		return no;
	}
	
	if(no->prox == no) {
		free(no);
		return NULL;
	}
	
	No* fim = no->ant;
	
	fim->ant->prox = no;
	no->ant = fim->ant;
	
	free(fim);
	
	return no;
}

//void liberar_recursivo(No* no);

/* Funcoes de impressao */
void imprime(No* no) {
	if(vazia(no)) {
		cout << "Lista vazia." << endl;
		return;
	}
	
	No* aux = no;
	
	cout << "Inicio: ";
	
	do {
		cout << aux->info;
		
		aux = aux->prox;
		
		if(aux != no) {
			cout << " - ";
		}
	} while (aux != no);
	
	cout << endl;
}

void imprime_reverso(No* no) {
	if(vazia(no)) {
		cout << "Lista vazia." << endl;
		return;
	}
	
	No* aux = no->ant;
	
	cout << "Fim: ";
	
	do {
		cout << aux->info;
		
		aux = aux->ant;
		
		if(aux != no->ant) {
			cout << " - ";
		}
	} while (aux != no->ant);
	
	cout << endl;
}

void imprime_inicio(No* no) {
	if(vazia(no)) {
		cout << "Lista vazia." << endl;
		return;
	}
	
	cout << "Inicio: " << no->info << endl;
}

void imprime_fim(No* no) {
	if(vazia(no)) {
		cout << "Lista vazia." << endl;
		return;
	}
	
	cout << "Fim: " << no->ant->info << endl;
}
