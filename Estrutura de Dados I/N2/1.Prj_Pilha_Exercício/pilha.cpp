// pilha.cpp

#include "pilha.h"

using namespace std;

/* Funcoes auxiliares */
No* inicializaPilha() {
	return inicializa();
}

int size(No* pilha) {
	return tamanho(pilha);
}

bool isEmpty(No* pilha) {
	return vazia(pilha);
}

/* Funcoes de insercao/remocao */
No* push(No* pilha, int valor) {
	return insere_inicio(pilha, valor);
}

No* pop(No* pilha) {
	if(isEmpty(pilha)) {
		cout << "Pilha vazia! Nada a ser removido." << endl;
		return pilha;
	}
	return retira_inicio(pilha);
}

/* Funcoes de impressao */

void mostrar(No* pilha) {
	if(isEmpty(pilha)){
		cout << "Pilha vazia!" << endl;
	} else {
		cout << "Topo: ";
		imprime_lista(pilha);
	}
}

void top(No* pilha) {
	if(isEmpty(pilha)) {
		cout << "Pilha vazia!" << endl;
	} else {
		cout << "Topo: " << valor_inicio(pilha) << endl;
	}
}
