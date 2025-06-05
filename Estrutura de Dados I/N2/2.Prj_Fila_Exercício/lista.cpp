// lista.cpp

#include "lista.h"

No* inicializa() {
	return NULL;
}

bool vazia(No* no){
	return no == NULL;
}

No* insere_inicio(No* no, int valor) {
	No* novo_no = (No*) malloc(sizeof(No));
	novo_no->info = valor;
	novo_no->prox = no;
	return novo_no;	
}

No* insere_fim(No* no, int valor) {
	No* novo_no = (No*) malloc (sizeof(No));
	novo_no->info = valor;
	novo_no->prox = NULL;
	
	if(vazia(no)) {
		return novo_no;
	} else {
		No* no_aux = no;
		for(;no_aux->prox != NULL; no_aux = no_aux->prox) {
			// Percorre a lista ate o ultimo no
		}
		no_aux->prox = novo_no;
		return no;
	}
}

void imprime_lista(No* no){
	if(vazia(no)) {
		cout << "Lista vazia!" << endl;
	} else {
		No* no_aux = no;
		
		cout << "L: ";
		for(;no_aux != NULL; no_aux = no_aux->prox) {
			cout << no_aux->info << " - ";
		}
		cout << endl;
	}
}

void imprime_inicio(No* no) {
	if(vazia(no)) {
		cout << "Lista vazia!";
	} else {
		cout << "Inicio: " << no->info << endl;
	}
	
}

void imprime_fim(No* no) {
	if(vazia(no)) {
		cout << "Lista vazia!";
	} else {
		No* no_aux = no;
		for(;no_aux->prox != NULL; no_aux = no_aux->prox) {
			// Percorre a lista até o último nó
		}
		cout << "Fim: " << no_aux->info << endl;
	}
}

No* busca(No* no, int valor){
	for(No* no_aux = no; no_aux != NULL; no_aux = no_aux->prox) {
		if(no_aux->info == valor) {
			return no_aux;
		}
	}
	return NULL;
}

No* retira(No* no, int valor) {
	No* no_ant = NULL;
	No* no_aux = no;
	
	while(no_aux != NULL && no_aux->info != valor) {
		no_ant = no_aux;
		no_aux = no_aux->prox;
	}
	
	if(no_aux == NULL) {
		cout << "Elemento nao encontrado!" << endl;
		return no;
	}
	
	if(no_ant == NULL) {
		no = no_aux->prox;	
	} else {
		no_ant->prox = no_aux->prox;
	}
	
	cout << "Elemento " << valor << " encontrado para remocao!" << endl;
	free(no_aux);
	return no;
}

No* libera(No* no) {
	No* no_aux = no;
	while(no_aux != NULL) {
		No* no_temp = no_aux->prox;
		free(no_aux);
		no_aux = no_temp;
	}
	cout << "Lista liberada!" << endl;
	return inicializa();
}

No* retira_inicio(No* no) {
	if (vazia(no)) {
		cout << "Lista vazia! Nada a remover." << endl;
		return no;
	}

	No* temp = no;
	no = no->prox;
	free(temp);
	return no;
}

int tamanho(No* no){
	int cont = 0;
	for(No* no_aux = no; no_aux != NULL; no_aux = no_aux->prox) {
		cont++;
	}
	return cont;
}
