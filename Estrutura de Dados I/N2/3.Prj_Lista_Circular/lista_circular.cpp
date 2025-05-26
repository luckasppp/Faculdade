// lista_circular.cpp

#include "lista_circular.h"

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
	
	if(vazia(no)){
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
		cout << "Lista vazia!" << endl;
		return NULL;
	}
	
	No* aux = no;
	
	do {
		if(aux->info == valor) {
			cout << "Valor " << valor << " encontrado" << endl;
			return aux;
		}
		
		aux = aux->prox;
	} while (aux != no);
	
	cout << "Valor " << valor << " nao encontrado" << endl;
	return NULL;
}

/* Funcoes de insercao/remocao */

No* insere_inicio(No* no, int valor) {
	No* novo = (No*) malloc(sizeof(No));
	novo->info = valor;
	
	if(vazia(no)) {
		novo->prox = novo;
		return novo;
	}
	
	novo->prox = no->prox;
	no->prox = novo;
	return no;
}

No* insere_fim(No* no, int valor) {
	if(vazia(no)) {
		return insere_inicio(no, valor);
	}
	
	No* novo = (No*) malloc(sizeof(No));
	novo->info = valor;
	novo->prox = no->prox;
	no->prox = novo;
	return novo;
}

No* retira(No* no, int valor) {
	/* Caso vazia */
	if(vazia(no)) {
		cout << "Lista vazia!" << endl;
		return no;
	}
	
	/* Percorre Lista  */
	No* ant = NULL;
	No* aux = no->prox;
	
	do {
		if(aux->info == valor) {
			break;
		}
		ant = aux;
		aux = aux->prox;
	} while (aux != no->prox);
	
	/* Verifica se achou o elemento */
	if(ant != NULL && aux == no->prox) {
		return no;
	}
	
	/* Verifica somente um elemento */
	if(aux == aux->prox) {
		free(aux);
		return NULL;
	}
	
	/* Para lista com 2 ou mais elementos */
	/* É o primeiro elemento */
	if (ant == NULL && aux == no->prox){
		no->prox = aux->prox;
		free(aux);
		return no;
	}
	
	/* É o outro elemento */
	ant->prox = aux->prox;
	if (aux == no){//se p aponta para o ?ltimo n?-dado
		no = ant;
	} 
	free(aux);
	return no;
	
}

No* retira_inicio(No* no) {
	/* Caso seja vazio */
	if(vazia(no)) {
		cout << "Lista vazia! Nada a ser retirado." << endl;
		return no;
	}
	
	/* Caso seja o unico no */
	if(no == no->prox) {
		free(no);
		return NULL;
	}
	
	/* Caso não seja o unico no */
	No* aux = no->prox;
	no->prox = aux->prox;
	free(aux);
	
	return no;
}

No* retira_fim(No* no) {
	/* Caso seja vazio */
	if(vazia(no)) {
		cout << "Lista vazia! Nada a ser retirado." << endl;
		return no;
	}
	
	/* Caso seja o unico no */
	if(no == no->prox) {
		free(no);
		return NULL;
	}
	
	
	/* Caso não seja o unico no */
	No* ant = no;
	
	do {
		ant = ant->prox;
	} while (ant->prox != no);
	
	ant->prox = no->prox;
	free(no);
	
	return ant;
}

void liberar_recursivo(No* atual, No* inicio) {
	/* Caso vazio */
	if (atual == NULL) {
		return;
	}

	No* proximo = atual->prox;

	/* Caso tenha chegado ao fim da volta, para */
	if (proximo == inicio) {
		free(atual); /* Libera o nó atual */
		return;
	}

	/* Chamada recursiva */
	liberar_recursivo(proximo, inicio);
	free(atual);
}

No* inicio_liberar_recursivo(No* ultimo) { // Função de liberação externa para iniciar a recursão
	/* Caso seja vazio */
	if (ultimo == NULL) {
		return NULL;	
	}

	No* inicio = ultimo->prox;
	liberar_recursivo(inicio, inicio);
	
	return NULL;
}


/* Funcoes de impressao */

void imprime(No* no) {
	if(vazia(no)){
		cout << "Lista vazia!" << endl;
	} else {
		No* aux = no->prox;

		do {
			cout << aux->info;
			if (aux->prox != no->prox) {
				cout << " - ";
			}
			
			aux = aux->prox;
		} while (aux != no->prox);
		
		cout << endl;
	}
}

void imprime_inicio(No* no) {
	if(vazia(no)){
		cout << "Lista vazia!" << endl;
	} else {
		cout << no->prox->info << endl;
	}
}

void imprime_fim(No* no) {
	if(vazia(no)){
		cout << "Lista vazia!" << endl;
	} else {
		cout << no->info << endl;
	}
}
