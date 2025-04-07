// Fila.cpp

#include "Fila.h"

void inicializa(Fila* fila) {
	fila->qtd = 0;
	fila->queue = NULL;
}

int size(Fila* fila) {
	return fila->qtd;
}

bool isEmpty(Fila* fila){
	return fila->qtd == 0;
}

void enqueue(Fila* fila, int valor){
	if(isEmpty(fila)){
		fila->qtd++;
		fila->queue = (int*) malloc(sizeof(int*));
	} else {
		fila->qtd++;
		fila->queue = (int*) realloc(fila->queue, fila->qtd * sizeof(int));
	}
	fila->queue[size(fila) - 1] = valor;
}

int dequeue(Fila* fila) {
	if(!isEmpty(fila)) {
		int removido = fila->queue[0];
		
		for(int i = 0; i < fila->qtd - 1; i++) {
			fila->queue[i] = fila->queue[i + 1];
		}
		
		fila->qtd--;
		
		if(fila->qtd == 0) {
			free(fila->queue);
			fila->queue = NULL;
		} else {
			fila->queue = (int*) realloc(fila->queue, fila->qtd * sizeof(int*));
		}
		
		return removido;
	} else {
		cout << "Fila vazia!" << endl;
	}
	return -99;
}


int front(Fila* fila){
	if(!isEmpty(fila)){
		return fila->queue[0];
	} else {
		cout << "Fila vazia!" << endl;
	}
	return -99;
}

void imprimir(Fila* fila) {
	if(!isEmpty(fila)){
		cout << "Fila: (Frente) -> ";
		for(int i = 0; i < fila->qtd; i++) {
			cout << fila->queue[i] << ", ";
		}
		cout << endl;
	} else {
		cout << "Fila vazia!" << endl;
	}
}

