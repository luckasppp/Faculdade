// Pilha.cpp
#include "Pilha.h"

int size(Pilha* pilha){
	return pilha->qtd;
}

bool isEmpty(Pilha* pilha){
	return pilha->qtd == 0;
}

void inicializa(Pilha* pilha) {
	pilha->qtd = 0;				// Inicializa contador para 0
	pilha->stack = NULL;		// Inicializa a pilha com tamanho null
}

void push(Pilha* pilha, int valor) {
	if(isEmpty(pilha)) {
		pilha->qtd++;
		pilha->stack = (int*) malloc(sizeof(int));
	} else {
		pilha->qtd++;
		pilha->stack = (int*) realloc(pilha->stack, pilha->qtd * sizeof(int));
	}
	pilha->stack[size(pilha)-1] = valor;
}

int pop(Pilha* pilha) {
	if(!isEmpty(pilha)) {
		int aux = top(pilha); 	// pega o valor que esta no topo da fila, isto eh, o ultimo valor inserido.
		pilha->qtd--;
		
		if(pilha->qtd == 0) {	// Libera o espaco  pilha na memoria
			free(pilha->stack);
		} else {				// Realiza realloc na pilha para o novo tamanho definido
			pilha->stack = (int*) realloc(pilha->stack, pilha->qtd * sizeof(int));
		}
		return aux;				// retorna o valor removido.
	} else {
		cout << "Pilha vazia!" << endl;
	}
	return -99; // Sinaliza pilha vazia.
}

int top(Pilha* pilha) {
	if(!isEmpty(pilha)) {
		return pilha->stack[size(pilha)-1];	// retorna o valor do topo da pilha	
	} else {
		cout << "Pilha vazia!" << endl;
	}
	return -99; // Sinaliza pilha vazia.
}

void imprimir(Pilha* pilha) {
	if(!isEmpty(pilha)) {
		for(int i = 0; i < size(pilha); i++) {
			cout << pilha->stack[i] << ", ";
		}
		cout << "(Topo)" << endl;
	} else {
		cout << "Pilha vazia!" << endl;
	}
}
