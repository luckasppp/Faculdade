// fila.cpp

#include "fila.h"

No* inicializaFila() {
	return inicializa();
}

No* enqueue(No* fila, int valor) {
	return insere_fim(fila, valor);
}

No* dequeue(No* fila){
	if(isEmpty(fila)) {
		cout << "Fila vazia!" << endl;
		return fila;
	} else {
		return retira_inicio(fila);
	}
}

void front(No* fila) {
	if(isEmpty(fila)) {
		cout << "Fila vazia!" << endl;
	} else {
		imprime_inicio(fila);
	}
}

bool isEmpty(No* fila) {
	return vazia(fila);
}

int size(No* fila) {
	return tamanho(fila);
}

void mostrar(No* fila) {
	imprime_lista(fila);
}
