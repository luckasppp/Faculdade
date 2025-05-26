//Pilha.h
#include <iostream>
#include <stdlib.h>

using namespace std;

typedef struct _pilha {
	int qtd;
	int* stack;
} Pilha;

void inicializa(Pilha* pilha);
void push(Pilha* pilha, int valor);
int pop(Pilha* pilha);
int size(Pilha* pilha);
bool isEmpty(Pilha* pilha);
int top(Pilha* pilha);
void imprimir(Pilha* p);