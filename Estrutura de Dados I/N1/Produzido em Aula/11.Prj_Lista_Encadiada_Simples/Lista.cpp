// Lista.cpp
#include "Lista.h"

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

void imprime_lista(No* no){
	if(vazia(no)) {
		cout << "Lista vazia!" << endl;
	} else {
		No* no_aux = no;
		int qtd = 0;
		cout << "L: ";
		
		for(;no_aux != NULL; no_aux = no_aux->prox, qtd++) {
			cout << no_aux->info << " - ";
		}
		
		cout << endl;
		cout << "Tamanho da lista: " << qtd << endl;
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
			cout << "Fim: " << no_aux->info << endl;
		}
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

int conta_impares(No* no) {
	No* no_aux = no;
	int cont = 0;
	
	if(no == NULL) {
		cout << "Lista vazia" << endl;
	} else {
		for (;no_aux != NULL; no_aux = no_aux->prox) {
			if(no_aux->info % 2 != 0) {
				cont++;
			}
		}	
	}
	return cont;
}

No* retira_fim(No* no) {
	No* no_aux = no;
	if (no == NULL){
		cout << "Lista vazia!" << endl;
	} else {
		for(;no_aux->prox != NULL ; no_aux = no_aux->prox) {
			no_aux = no_aux->prox;
		}
		free(no_aux);
	}
	
	return no;
}
