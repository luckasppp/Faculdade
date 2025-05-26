// fila.cpp

#include "fila.h"

using namespace std;

/* Funcoes auxiliares */
No* inicializaFila() {
	return inicializa();
}

bool isEmpty(No* fila) {
	return vazia(fila);
}

int size(No* fila) {
	return quantidade(fila);
}

/* Funcoes de insercao/remocao */
No* enqueue(No* fila, int valor) {
	return insere_fim(fila, valor);
}

No* dequeue(No* fila) {
	if(isEmpty(fila)) {
		cout << "Fila vazia! Nada a ser removido." << endl;
		return fila;
	}
	
	return retira_inicio(fila);	
}

No* liberar_recursivo_fila(No* fila) {
	inicio_liberar_recursivo(fila);
}

/* Funcoes de impressao */
void imprimir(No* fila) {
	if(isEmpty(fila)) {
		cout << "Fila vazia!" << endl;
	} else {
		cout << "Frente: ";
		imprime(fila);
	}
}

void front(No* fila) {
	imprime_inicio(fila);
}

void last(No* fila) {
	imprime_fim(fila);
}
